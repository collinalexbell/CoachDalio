#include <iostream>
#include <unistd.h>
#include <vector>
#include <string>

using namespace std;

void be_a_hyper_realist() {
  string dev_null;
  cout << "be a hyper realist" << flush;
  for(int i=0; i<3; i++) {
    sleep(1);
    cout << "." << flush;
  }

  sleep(1);
  cout << endl;


  vector<string> admirable_people;
  string person;
  cout << "write down 3 people you admire" << endl;
  for(int i=0; i<3; i++) {
    cout << i << ") ";
    getline(cin, person);
    cout << endl;
    admirable_people.push_back(person);
  }

  for(int i=0; i<3; i++) {
    cout << "In what way is " << admirable_people[i] << " a practical realist?" << endl;
    getline(cin, person);
    sleep(0.5);
  }
  cout << "be a hyper-realist" << endl;
}

void truth() {
  string input;
  while(true) {
    string statement = "I pledge to seek the Truth, for Truth - or more precicely, an accurate understanding of reality - is the essential foundation for any good outcome";
    cout << "Repeat after me. 'I pledge to seek the Truth, for Truth - or more precicely, an accurate understanding of reality - is the essential foundation for any good outcome'" << endl;
    getline(cin, input);
    if(input == statement) {
      return;
    }
  }
}
