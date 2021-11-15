#include <iostream>

using namespace std;
#include<iostream>
int main () {
    string userchoice1;
    string userchoice2;
    string userchoice3;
    string userchoice4;
    string userchoice5;


    cout << "Welcome to our Engineering Mystery Project!" << endl;
    cout << "Be prepared to handle THE ORVILLE DAM CRISIS" << endl;
    cout
            << "We want you as the user to decipher the engineering mistake that nearly lead to one of the largest engineering failures ever."
            << endl;
    cout
            << "This program will guide you through the four stages that will allow you to make choices on your path to discovering what went wrong."
            << endl;
    cout << "Good luck. And may the odds be ever in your favor." << endl;
    cout << "Are you ready to enter stage 1??? Please enter the letter Y to begin!!!" << endl;
    cin >> userchoice1;
    if(userchoice1 == "Y" || "y"){
        cout << "You are now entering stage 1:" << endl;
    }
    else{
        cout << "Please enter the letter Y to begin!!!" << endl;
        cin >> userchoice1;
    }

    // Stage 1 begins
    cout
            << "The Orville Dam is located in Northern California on the Feather River, east of the city Orville, which is east of Sacramento Valley."
            << endl;
    cout
            << "At 770 feet high, it is the tallest dam in the United States and serves mainly for water supply, hydroelectricity generation, and flood control."
            << endl;
    cout << "The rainy season of 2016-2017 was Northern California's wettest winter in over 100 years." << endl;
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
    while(userchoice2 != "B" || userchoice2 != "b") {
        cout << "Wrong choice. Try again" << endl;
        cin >> userchoice2;
    }
    cout << " Heavy rainfall resulted in record inflows from the Feather River, and the spillway was opened in January to relieve the dam pressure. Therefore, you have made the correct choice. Please proceed to stage 2." << endl;

    //Stage 2 begins
    cout << "Welcome to stage 2. Being here means you successfully completed stage 1. Good luck!!!" << endl;
    cout
            << "On February 7, Orville Dam employees noticed an unusual flow pattern. Engineers were called to inspect the integrity of the dam."
            << endl;
    cout << "A splotch is noticed on the normal spillway." << endl;
    cout << "They bring it to the attention of the team of engineers." << endl;

    cout << "You MUST immediately close the spillway. To do this, press the yellow button." << endl;
    cout << "A large area of concrete and foundation erosion was found, too large to repair." << endl;
    cout << "How should the engineers proceed?" << endl;
    cout << "Choice (A) Divert the water to the emergency spillway" <<endl;
    cout << "Choice (B) Reopen the sluices, further damaging the spillway - press green button to reopen sluices" <<endl;
    cout << "Choice (C) " <<endl;
    cin >> userchoice3;
    while (userchoice3 != "B" || "b"){
        cout << "You have made the wrong choice. Please try again." << endl;
        cin >> userchoice3;
    }
    cout << "You have made the correct choice. Please proceed to stage 3." <<endl;

//Stage 3 begins
    cout << "Welcome to stage 3. This is the second to last stage, let's see if you have what it takes to save the Orville Dam!!!" <<endl;
    cout << "After a second series of heavy storms in February, the spillway flow was increased to 50,000 cubic feet per ??" << endl;
    // INSERT ANOTHER WEATHER FORECAST HERE
    cout << "The engineers have decided to let the dam build to the emergency spillway level." << endl;
    cout << "Because of this, the emergency action plan has to be put into place." << endl;
    cout << "Here are your options about the emergency action plan:" << endl;
    cout << "Keep in mind, evacuating people will create a panic, but not evacuating people could result in mass casualties!" << endl;
    cout << "Here are your options:" <<endl;
    cout << "Choice (A) Evacuate people within a 10 mile radius" << endl;
    cout << "Choice (B) Evacuate people within a 50 mile radius" << endl;
    cout << "Choice (C) Do NOT evacuate anyone" << endl;
    cin >> userchoice4;
    while (userchoice4 != "B" || "b"){
        cout << "You have made the wrong choice. Please try again." << endl;
        cin >> userchoice4;
    }
    cout << "Engineers have discovered that the water flowing over the emergency spillway is eroding the hillside, threatening the integrity of the dam as a whole. Therefore, you have made the correct choice. Please proceed to stage 4." << endl;

    // Stage 4 begins
    cout << "Welcome to stage 4. This is the final stage. Goodluck!!!" << endl;
    cout << "Should we reopen the normal spillway to save the integrity of the dam?" << endl;
    cout << "Choice (A) Press the green button to reopen the normal spillway sluices" << endl;
    cout << "Choice (B) Press the yellow button to NOT open the normal spillway sluices" <<endl;
    cin >> userchoice5;
    while (userchoice5 != "B" || "b"){
        cout << "You have made the wrong choice. Please try again." << endl;
        cin >> userchoice5;
    }
    cout << "The engineers to decide to open the normal spillway, therefore you have made the correct choice. Sadly, this choice will destroy the integrity of the dam, but no lives are lost!!!" << endl;
    cout << "You have completed the Orville Dam challenge!!" << endl;
    // Board displays flashing lights and congratulates the user

    cout <<"Welcome to our engineering mystery! \n Be prepared to handle the Oroville Dam crisis. We want you as the user to decipher the engineering mistake that nearly lead to one of the largest engineering failures ever. This program will guide you through the four stages that will allow you to make choices on your path to discovering what went wrong. \n Good luck. And may the odds be ever in your favor." << endl;
    cout<<"The Oroville Dam provides water supply, hydroelectricity generation, and flood control to a region of central California. \n In Febuary 2017, a gaping hole on the dam discovered. This lead to a hasty scramble to figure out a safe solution to fix the hole while combating threats of heavy rainfall and erosion." << endl;
    cout<<"The Arduino control panel contains four buttons and four corresponding colored LED lights that will be used throughout the game. The correct" << endl;
//Forecast flashes on screen
    cout<<"Here is a weather forecast of central California. Circled in black is the location of the Oroville Dam. \n Which option best describes the predicted amount of rainfall in the forecast? Press the red button for 0.01-0.25 inches, yellow for 0.5-2, green for 3-8, or blue for 8-15." << endl;
//green button is correct answer
    cout<<"That's correct, the Oroville Dam was inundated with 3-8 inches rain fall. As a result, the water pressure of the dam was record high." << endl;


}