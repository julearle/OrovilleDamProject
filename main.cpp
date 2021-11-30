#include <iostream>

using namespace std;

#include<iostream>

int main() {
    string userchoice1;
    string userchoice2;
    string userchoice3;
    string userchoice4;
    string userchoice5;

    cout
            << "Welcome to our engineering mystery! \n Be prepared to explore the Oroville Dam crisis. This program will guide you through four stages that will allow you to make choices to discover what went wrong. \n Good luck!"
            << endl;
    cout
            << "The Oroville Dam provides water supply, hydroelectricity generation, and flood control to a region of central California. \n In February 2017, a gaping hole on the dam discovered. This lead to a hasty scramble to figure out a safe solution to fix the hole while combating threats of heavy rainfall and dangerous erosion."
            << endl;
    cout
            << "The Arduino control panel contains four buttons and four corresponding colored LED lights that will be used throughout the game."
            << endl;

//introduces stage 1
    cout << "Are you ready to start the game? Please enter the letter Y to begin." << endl;
    cin >> userchoice1;
    if (userchoice1 == "Y" || "y") {
        cout << "You are now entering stage 1:" << endl;
    } else {
        cout << "//ADD default setting to restart code if y isn't pressed" << endl;
        cin >> userchoice1;
    }
    cout << "You are now entering stage 1:" << endl;

//stage 1 begins

//Forecast flashes on screen (**split screen?**)
    cout
            << "Here is a weather forecast of central California. Circled in black is the location of the Oroville Dam. \n Which option best describes the predicted amount of rainfall? Press the red button for 0.01-0.25 inches, yellow for 0.5-2, green for 3-8, or blue for 8-15."
            << endl;
//green button is correct answer (**recode Arduino?**)
    //code for incorrect answers
    cout << "Please select the color button you pressed:" << endl;
    cout << "Choice (A) Red Button" << endl;
    cout << "Choice (B) Yellow Button" << endl;
    cout << "Choice (C) Green Button" << endl;
    cout << "Choice (D) Blue Button" << endl;
    cin >> userchoice2;
    while (userchoice2 != "C" || userchoice2 != "c") {
        cout << "Wrong choice. Try again" << endl;
        cin >> userchoice2;
        cout
                << "That's correct, the Oroville Dam was inundated with 3-8 inches rain fall. As a result, the water pressure of the dam was record high."
                << endl;

//begin stage 2
        cout << "You are now entering stage 2:" << endl;
        cout << "On February 7th, Orville Dam employees noticed an unusual flow pattern and dark spot on the dam."
             << endl;
        cout << "They bring this issue to the attention of the team of engineers." << endl;
        cout << "What should the engineers do to address this issue?" << endl;
        cout << "Choice (A) Look for human error in calculating the water pressure" << endl;
        cout << "Choice (B) Postpone looking for a solution for a day to wait out the rainy forecast" << endl;
        cout << "Choice (C) Turn off the water to get a better look at the dark spot" << endl;
        cout << "Choice (D) Do nothing and hope for the best" << endl;
        cin >> userchoice3;
        while (userchoice3 != "C" || "c") {
            cout << "You have made the wrong choice. Please try again." << endl;
            cin >> userchoice3;
            cout << "That's correct, the engineers turned off the water and found..." << endl;

//begin stage 3
            cout << "You are now entering stage 3:" << endl;
            cout << "... a gaping hole" << endl;
            cout << "To see this hole, slide the switch on the Arduino control panel." << endl;
            cout << ""


            cout << "Because of hole, the emergency action plan has to be put into place." << endl;
            cout << "Here are your options about the emergency action plan:" << endl;
            cout
                    << "Keep in mind, evacuating people will create a panic, but not evacuating people could result in mass casualties!"
                    << endl;
            cout << "Here are your options:" << endl;
            cout << "Choice (A) Evacuate people within a 10 mile radius" << endl;
            cout << "Choice (B) Evacuate people within a 50 mile radius" << endl;
            cout << "Choice (C) Do NOT evacuate anyone" << endl;
            cin >> userchoice4;
            while (userchoice4 != "B" || "b") {
                cout << "You have made the wrong choice. Please try again." << endl;
                cin >> userchoice4;
            }

            cout
                    << "Engineers have discovered that the water flowing over the emergency spillway is eroding the hillside, threatening the integrity of the dam as a whole. Therefore, you have made the correct choice. Please proceed to stage 4."
                    << endl;

            // Stage 4 begins
            cout << "Welcome to stage 4. This is the final stage. Goodluck!!!" << endl;

            cout
                    << "Here is a weather forecast of central California. Circled in black is the location of the Oroville Dam. \n Which option best describes the predicted amount of rainfall in the forecast? Press the red button for 0.01-0.25 inches, yellow for 0.5-2, green for 3-8, or blue for 8-15."
                    << endl;
//green button is correct answer
            cout
                    << "That's correct, the Oroville Dam was inundated with 3-8 inches rain fall. As a result, the water pressure of the dam was record high."
                    << endl;


        }

    }


/* RANDOM STUFF


    cout << "Should we reopen the normal spillway to save the integrity of the dam?" << endl;
            cout << "Choice (A) Press the green button to reopen the normal spillway sluices" << endl;
            cout << "Choice (B) Press the yellow button to NOT open the normal spillway sluices" << endl;
            cin >> userchoice5;
            while (userchoice5 != "B" || "b") {
                cout << "You have made the wrong choice. Please try again." << endl;
                cin >> userchoice5;
            }
            cout
                    << "The engineers to decide to open the normal spillway, therefore you have made the correct choice. Sadly, this choice will destroy the integrity of the dam, but no lives are lost!!!"
                    << endl;
            cout << "You have completed the Orville Dam challenge!!" << endl;
            // Board displays flashing lights and congratulates the user

            cout
                    << "Welcome to our engineering mystery! \n Be prepared to explore the Oroville Dam crisis. We want you to decipher the engineering mistake that nearly lead to one of the largest engineering failures to date. This program will guide you through four stages that will allow you to make choices to discover what went wrong. \n Good luck!"
                    << endl;
            cout
                    << "The Oroville Dam provides water supply, hydroelectricity generation, and flood control to a region of central California. \n In February 2017, a gaping hole on the dam discovered. This lead to a hasty scramble to figure out a safe solution to fix the hole while combating threats of heavy rainfall and dangerous erosion."
                    << endl;
            cout
                    << "The Arduino control panel contains four buttons and four corresponding colored LED lights that will be used throughout the game."
                    << endl;
//Forecast flashes on screen
    // FORECAST FLASHES ON SCREEN INSERT JONAH'S CODE HERE
    cout << "The RBG light represents the forecasted amount of precipitation for the reservoir in the incoming storm."
         << endl;
    cout
            << "The buttons on the control board are, Red = stop/start hydropower, yellow = close spillway sluices, green = open spillway sluices, and blue = open spillway sluices halfway."
            << endl;
    cout << "RGB LED, Red >= 12” rain, Teal = 8-11”, yellow = 6-7”, green = 1-5”, purple = <1”" << endl;
    cout << "What do you want to do?" << endl;
    // DISPLAY IMAGE OF DAM, insert JONAHS CODE HERE
    cout << "Choice (A) Shut-off hydropower - press red button." << endl;
    cout << "Choice (B) Open all sluices in spillway - press green button." << endl;
    cout << "Choice (C) Open half sluices in spillway - press blue button" << endl;
    cin >> userchoice2;
    while(userchoice2 != "B" && userchoice2 != "b") {
        cout << "Wrong choice. Try again" << endl;
        cin >> userchoice2;
*/
}