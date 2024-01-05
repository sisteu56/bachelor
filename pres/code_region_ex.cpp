#include <string>
class User {
    string name;
    string email;
};
using namespace std;
int SizeLimit = 333;
bool FeatureSizeLimit = true;
bool FeatureContact = true;

void sendMessage(User user, string message) {
    string add = "decrypted by UdS";    
    if (FeatureSizeLimit) {
        if (message.length() > SizeLimit) {
            if (FeatureCut) {
                
            }
            throw Error;
        }
    }
    transmitMessage(message);
}

void transmitMessage(string message);

bool FeatureA = true;
bool FeatureB = true;

int func(int x, int y) {
    x = y + 10;
    if (FeatureA) {
        x = x * 2;
        if (FeatureB) {
            y = x + y;
        }
        x = y + 5;
    }
    return x + y;
}

