#include "Doctor.h"
#include "../Hospital.h"


std::vector<std::string> Doctor::symptomsList = {
                "Fever", "Cough", "Headache", "Fatigue", "Sore throat",
                "Nausea", "Shortness of breath", "Muscle aches", "Loss of taste or smell",
                "Chills", "Congestion", "Diarrhea", "Body aches", "Runny nose",
                "Difficulty breathing", "Joint pain", "Chest pain", "Abdominal pain"
            };
            
std::vector<std::string> Doctor::treatmentsList =  {
            "Rest", "Hydration", "Medication", "Antibiotics", "Pain relievers",
            "Anti-inflammatory drugs", "Antiviral drugs", "Cough syrup", "Hot drinks",
            "Steam inhalation", "Warm compress", "Saltwater gargle", "Humidifier",
            "Nasal saline drops", "Throat lozenges", "Breathing exercises", "Dietary changes",
            "Physical therapy", "Stress management", "Sleep hygiene"
        };


Doctor::Doctor(string name, Hospital* hospital):Person(name)
{
    this->isInAmbulance = false;
    this->hospital = hospital;
}

string Doctor::getType()
{
    return "Doctor";
}

void Doctor::setPatient(Patient *patient)
{
    this->currentPatient = patient;
}

void Doctor::workInAmbulance(int id)
{
    Ambulance* ambulance = this->hospital->getAmbulance(id);
    
    if (ambulance != nullptr && !this->isInAmbulance)
    {
        this->isInAmbulance = true;
        ambulance->assignDoctor(this);
    }
}

template<typename T>
void shuffleVector(std::vector<T>& vec)
{
    std::mt19937 g(static_cast<unsigned int>(std::time(0)));
    std::random_shuffle(vec.begin(), vec.end());
}

template<typename T>
std::vector<T> getRandomSubset(const std::vector<T>& list, int count)
{
    std::vector<T> subset;
    if (count <= 0) return subset;

    std::random_device rd;
    std::mt19937 g(rd());

    std::vector<T> shuffledList = list;
    shuffleVector(shuffledList);

    for (int i = 0; i < count; ++i) {
        subset.push_back(shuffledList[i]);
    }

    return subset;
}

void Doctor::makeDiagnose()
{
    int symptomsCount = std::rand() % 4; 
    int treatmentsCount = std::rand() % 3 + 1;

    std::vector<std::string> randomSymptoms = getRandomSubset(this->symptomsList, symptomsCount);
    std::vector<std::string> randomTreatments = getRandomSubset(this->treatmentsList, treatmentsCount);

    makeDiagnose("Random Diagnose", randomSymptoms, randomTreatments);
}

void Doctor::makeDiagnose(string name, vector<string> symptoms,  vector<string> treatments)
{
    Diagnose* diagnose = new Diagnose(name);
    for(string symptom : symptoms){
        diagnose->addSymptom(symptom);
    }

    for(string treatment : treatments){
        diagnose->addTreatment(treatment);
    }
    
    this->currentPatient->setDiagnose(diagnose);
    this->setPatient(nullptr);
}

void Doctor::leaveAmbulance()
{
    this->isInAmbulance = false;
}

Doctor::~Doctor()
{
    this->currentPatient = nullptr;
    this->hospital = nullptr;
}