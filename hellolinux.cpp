#include <iostream>
#include <vector>


using namespace std;

int main()
{

    vector <string> myPets = {"dog", "cat", "bird", "second bird"};

    for(string pet: myPets){
        cout << pet << endl;
    }
    
    cout << "ALL say hello from Linux" << endl;

    return EXIT_SUCCESS;
}


