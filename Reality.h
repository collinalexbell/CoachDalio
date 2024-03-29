#include <iostream>
#include <unistd.h>
#include <vector>
#include <string>
#include <chrono>
#include <thread>
#include <sstream>


using namespace std;

class Reality {
  string past, future;
  public:
    Reality() {
      int timescale;
      cout << "choose a reflection time-period" << endl
        << "1) today" << endl
        << "2) yesterday" << endl
        << "3) last week" << endl
        << "1, 2, or 3" << endl;
      cin >> timescale;
      cin.ignore();
      switch(timescale) {
        case 1:
          past = "today";
          future = "tommorow";
          break;
        case 2:
          past = "yesterday";
          future = "today";
          break;
        case 3:
          past = "last week";
          future = "this week";
          break;
        default:
          past = "today";
          future = "tomorrow";
      }
    }
    void scroll_print(string content, int chars_per_sec){
      for(auto it = content.begin(); it != content.end(); it++) {
        cout << *it << flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(1000/chars_per_sec));
      }
    }

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
        sleep(1);
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

    void radically_open_minded_and_transparent() {
      string input;
      cout << "In what way could I have been more open minded " << past <<"?" << endl;
      getline(cin, input);
      cout << "What could I do differently tomorrow to be more open minded?" << endl;
      getline(cin, input);

      cout << "In what way could I have been more transparent " << past << "?" << endl;
      getline(cin, input);
      cout << "What could I do differently tomorrow to be more transparent?" << endl;
      getline(cin, input);
    }

    void look_to_nature() {
      string intro = "Look to nature, it uses imperfect forms to increase Will to Power through evolution\n";
      scroll_print(intro, 45);

      stringstream prompt;
      prompt << "What specific evolutionary step can you take " << future << " that synergistically increases will to power for yourself and parent holons?";
      scroll_print(prompt.str(), 45);

      string input;
      getline(cin, input);
    }

    void game_of_life(){
      system("cpp-game-of-life/bin/life_term 10");
    }

    void evolving_is_lifes_greatest_reward(){
      string input;
      string becomming = "Becoming, aka evolving, is life's greatest reward and it occurs in proportion to one's Will to Power";
      scroll_print(becomming, 45);
      sleep(1);
      game_of_life();
      sleep(1);
      string prompt = "Write down 1 expiriment you will do tomorrow in an attempt to evolve......\n";
      scroll_print(prompt, 45);
      getline(cin, input);
    }

    void natures_practical_lessons() {
      string input;
      string intro = "Money & things have diminishing marginal returns but growth does not. Pain (both mental and physical) is what one experiences on the path of growth.\n";
      scroll_print(intro, 45);
      sleep(1);
      string question = "Name a recent time when you experienced pain in the pursuit of growth\n";
      scroll_print(question, 45);
      getline(cin, input);
    }

    void pain_reflection_and_progress() {
      string input;
      string intro = "Pain + Reflection = Progress\nPain should not be avoided and in fact should be accepted or even sought out because evolving is painful\n";

      scroll_print(intro, 30);
      sleep(1);

      stringstream question;
      question << "What was the largest pain point " << past <<"?\n";
      scroll_print(question.str(), 30);
      getline(cin, input);  
      sleep(1);

      question.clear();
      question << "How did you handle the pain?\n";
      scroll_print(question.str(), 30);
      getline(cin, input);  
    }

    void weigh_second_and_third_order_consequences(){
      string input;
      string intro = "The second and third order consequences generally are more important in the long term than the first order consequences, because it is the second and third order consequences that compund over time\n\n";
      scroll_print(intro, 30);

      stringstream question;
      question << "Describe an important decision you made " << past << ".\n";
      scroll_print(question.str(), 30);
      getline(cin, input);  

      string nth[] = {"first", "second", "third"};
      for(int i=0; i<3; i++){
        question.clear();
        question << "What is the " ;
        question << nth[i];
        question << " order consequence of that decision?\n";
        scroll_print(question.str(), 30);
        getline(cin, input);  
      }
    }

    void own_your_outcomes() {
      string intro = "even the worst circumstances can be made better with the right approach.\n";
      scroll_print(intro, 30);
      sleep(1);
      string study = "People with an 'internal locus of control' outperform people who do not.\n";
      scroll_print(study, 30);
      sleep(1);
      string instruction = "Meditate on your internal locus of control\n";
      scroll_print(instruction, 30);
      sleep(1);
      system("clear");
      string ommm = "Ohmmmmmmmmm........................................................................................................................................................................................................................................................................................................................................";
      scroll_print(ommm, 5);
    }
};

