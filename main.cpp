#include <iostream>
#include <unistd.h>

using namespace std;

int main() {
    string userchoice1;
    string userchoice2;
    string userchoice3;
    string userchoice4;
    string userchoice5;

    cout
            << "Welcome to our engineering mystery! \n Be prepared to explore the Oroville Dam crisis. This program will guide you through four stages that will allow you to make choices to discover what went wrong. \n Good luck!"
            << endl;
    usleep(1000000);
    cout
            << "The Oroville Dam provides water supply, hydroelectricity generation, and flood control to a region of central California. \n In February 2017, a gaping hole on the dam discovered. This lead to a hasty scramble to figure out a safe solution to fix the hole while combating threats of heavy rainfall and dangerous erosion."
            << endl;
    usleep(1000000);
    cout
            << "The Arduino control panel contains four buttons and four corresponding colored LED lights that will be used throughout the game. For all incorrect button presses, a buzzer will sound."
            << endl;

//introduces stage 1
    cout << "Are you ready to start the game? Please enter the letter Y to begin." << endl;
    cin >> userchoice1;
    while (userchoice1 != "Y" && userchoice1 != "y") {
        cout << "please enter y: ";
        cin >> userchoice1;
    }
    cout << "You are now entering stage 1:" << endl;

//stage 1 begins

//Forecast flashes on screen (**split screen?**)
    cout
            << "Here is a weather forecast of central California. Circled in black is the location of the Oroville Dam. Click on the right side of the screen to go back to this program. \n Which option best describes the predicted amount of rainfall? Press the red button for 0.01-0.25 inches, yellow for 0.5-2, green for 3-8, or blue for 8-15."
            << endl;
    usleep(8000000);
    system("open ../forecast.jpeg");
    //green button is correct answer (**recode Arduino?**)
    //code for incorrect answers
    cout << "Please select the color button you pressed:" << endl;
    cout << "Choice (A) Red Button" << endl;
    cout << "Choice (B) Yellow Button" << endl;
    cout << "Choice (C) Green Button" << endl;
    cout << "Choice (D) Blue Button" << endl;
    cin >> userchoice2;
    while (userchoice2 != "C" && userchoice2 != "c") {
        cout << "Wrong choice. Try again" << endl;
        cin >> userchoice2;
    }
    system("killall Preview");
    cout
            << "That's correct, the Oroville Dam was inundated with 3-8 inches rain fall. As a result, the water pressure of the dam was record high."
            << endl;

//begin stage 2
    cout << "You are now entering stage 2:" << endl;
    cout << "On February 7th, Orville Dam employees noticed an unusual flow pattern and dark spot on the dam." << endl;
    cout << "They bring this issue to the attention of the team of engineers." << endl;
    cout << "What should the engineers do to address this issue?" << endl;
    cout << "Choice (A) Look for human error in calculating the water pressure" << endl;
    cout << "Choice (B) Postpone looking for a solution for a day to wait out the rainy forecast" << endl;
    cout << "Choice (C) Turn off the water to get a better look at the dark spot" << endl;
    cout << "Choice (D) Do nothing and hope for the best" << endl;
    cin >> userchoice3;
    while (userchoice3 != "C" && userchoice3 != "c") {
        cout << "You have made the wrong choice. Please try again." << endl;
        cin >> userchoice3;
    }
    cout << "That's correct, the engineers turned off the water and found..." << endl;

//begin stage 3
    cout << "You are now entering stage 3:" << endl;
    cout << "... a gaping hole" << endl;
    cout << "To see this hole, slide the switch on the Arduino control panel." << endl;

    cout << "Because of the hole, an emergency action plan has to be put into place." << endl;
    cout << "Keep in mind, evacuating people will create a panic, but not evacuating people could result in mass casualties!" << endl;
    cout << "Here are the emergency action plan options:" << endl;
    cout << "Choice (A) Evacuate people within a 10 mile radius" << endl;
    cout << "Choice (B) Evacuate people within a 50 mile radius" << endl;
    cout << "Choice (C) Do NOT evacuate anyone" << endl;
    cin >> userchoice4;
    while (userchoice4 != "B" && userchoice4 != "b") {
        cout << "You have made the wrong choice. Please try again." << endl;
        cin >> userchoice4;
    }

    //Stage 4 Begins
    cout << "You are now entering stage 4:" << endl;
    cout << "Now that people have been evacuated in a 50 mile radius, engineers must decide how to prevent the collapse of the dam and surrounding hillside." << endl;
    cout << "Should the engineers: \nChoice (A) Continue to let the water flow, eroding the hillside around the dam \nChoice (B) Let the water make the hole bigger, but not erode the hillside \nChoice (C) Attempt a dangerous operation with helicopters dropping cement into the hole \nChoice (D) Do nothing and hope for the best" << endl;
    userchoice5 = "";
    while (userchoice5 != "B" && userchoice5 != "b") {
        cout << "You have made the wrong choice. Please try again." << endl;
        cin >> userchoice5;
    }
    cout << "The engineers decided to let the water erode the hole, therefore you have made the correct choice. Sadly, this choice will cause billions in damage, but no lives are lost." << endl;
    cout << "Thank you for playing our engineering mystery.";
    return 0;
}
