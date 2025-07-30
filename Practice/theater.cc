#include <iostream>
#include <string>
#include <sstream>
#include <cctype>
#include <algorithm>
#include <fstream>
#include <vector>

using namespace std;

class Theater
{
private:
    const int rightPassword = 75425965;

protected:
    int maxSeats = 75;
    string name;
    string strPhoneNumber;
    string CmovieName;
    string OmovieName;
    int number;
    string ident;
    int password;
    int movieNumber;
    string startTime;
    string sections;
    string choice;
    string seatRow;
    int price;
    int total;

public:
    Theater()
    {
        identity();
    }
    void availableMovies()
    {
        cout << "Enter the number of today's available movies: ";
        cin >> movieNumber;
        if (movieNumber > 0 && movieNumber <= 5)
        {
            cout << "-----Today's Available Movies-----" << endl;
            ofstream outFile("theaterMovieList.txt"); // Open for writing outside the loop

            for (int i = 0; i < movieNumber; i++)
            {
                cout << "Enter the name for movie No." << i + 1 << " : ";
                cin.ignore();
                getline(cin, OmovieName);
                cout << "Enter movie's start time e.g(01:00 pm): ";
                cin >> startTime;
                cout << "Enter Available seats for movie : ";
                cin >> maxSeats;

                outFile << "-----Details for movie No " << i + 1 << "-----" << endl;
                outFile << i + 1 << "- " << OmovieName << endl;
                outFile << "    Start time : " << startTime << endl;
                outFile << "    Available seats : " << maxSeats << endl;
            }
            outFile.close(); // Close the file after writing all movies

            cout << "Movies added successfully!" << endl;
            cout << "Do you wanna have a look at the list (yes/no) : ";
            string input4;
            cin >> input4;
            transform(input4.begin(), input4.end(), input4.begin(), ::tolower);

            if (input4 == "yes")
            {
                getList();
                identity();
            }
            else if (input4 == "no")
            {
                identity();
            }
            else
            {
                cout << "Please respond with owner or customer. Other arguments aren't valid!" << endl;
            }
        }
        else
        {
            cout << "Upto 5 movies can be played in a day." << endl;
        }
    }
    void identity()
    {
        cout << "Are you the owner or customer (owner/customer) : ";
        cin >> ident;
        transform(ident.begin(), ident.end(), ident.begin(), ::tolower);
        if (ident == "owner")
        {
            handler();
        }
        else if (ident == "customer")
        {
            main();
        }
        else
        {
            cout << "Please respond with owner or customer. Other arguments aren't valid!" << endl;
            identity();
        }
    }
    void handler()
    {
        cout << "Enter Password: ";
        cin >> password;
        if (password == rightPassword)
        {
            cout << "Authorized Account logged in successfully..." << endl;
            availableMovies();
        }
        else
        {
            cout << "Incorrect Password!" << endl;
            cout << "If you are a customer go to the customer page." << endl;
            cout << "Do you wanna go to customer page (yes/no) : ";
            string input1;
            cin >> input1;
            transform(input1.begin(), input1.end(), input1.begin(), ::tolower);
            if (input1 == "yes")
            {
                main();
            }
            else if (input1 == "no")
            {
                identity();
            }
            else
            {
                cout << "Please respond with yes or no." << endl;
            }
        }
    }
    void getList()
    {
        ifstream file("theaterMovieList.txt");
        if (file.is_open())
        {
            stringstream st;
            st << file.rdbuf();
            string content = st.str();
            cout << content << endl;
            if (content.empty())
            {
                cout << "No Movies Available for now!" << endl;
            }
            file.close();
        }
        else
        {
            cout << "Unable to open file" << endl;
        }
    }
    bool search()
    {
        ifstream file1("theaterMovieList.txt");
        if (!file1)
        {
            cout << "File not found..." << endl;
            return false;
        }
        string toFind = CmovieName;
        transform(toFind.begin(), toFind.end(), toFind.begin(), ::tolower); // Transform toFind to lowercase
        string line;
        while (getline(file1, line))
        {
            string lowerLine = line;
            transform(lowerLine.begin(), lowerLine.end(), lowerLine.begin(), ::tolower);
            if (lowerLine.find(toFind) != string::npos)
            {
                file1.close();
                return true;
            }
        }
        file1.close();
        return false;
    }
    void movie()
    {
        cout << "Enter the movie name from available list: ";
        cin.ignore();
        getline(cin, CmovieName);
        transform(CmovieName.begin(), CmovieName.end(), CmovieName.begin(), ::tolower);

        if (!search())
        {
            cout << "Movie isn't available!" << endl;
            cout << "Please have a look at the available movies list" << endl;
            cout << "Do you wanna see the available movies (yes/no) : ";
            string input2;
            cin >> input2;
            transform(input2.begin(), input2.end(), input2.begin(), ::tolower);
            if (input2 == "yes")
            {
                getList();
                ticketList();
                movie();
            }
            else if (input2 == "no")
            {
                movie();
            }
            else
            {
                cout << "Please respond with yes or no." << endl;
            }
        }
    }
    void PhoneNum()
    {
        cout << "Enter your phone number (03*********): ";
        cin >> strPhoneNumber;
        if (strPhoneNumber.length() == 11 && strPhoneNumber[0] == '0' && strPhoneNumber[1] == '3')
        {
            cout << "Your number has been recorded." << endl;
        }
        else
        {
            cout << "Invalid phone number." << endl;
            PhoneNum();
        }
    }
    void ticketList()
    {
        cout << "----Price of seats by row----" << endl;
        cout << "Front row : 2000" << endl;
        cout << "Middle row : 1500" << endl;
        cout << "Last row : 1000" << endl;
    }
    void ticket()
    {
        if (seatRow == "front")
        {
            price = 2000;
        }
        else if (seatRow == "middle")
        {
            price = 1500;
        }
        else if (seatRow == "last")
        {
            price = 1000;
        }
        else
        {
            cout << "Please respond with a valid argument!" << endl;
        }
    }
    void seats()
    {
        cout << "Available movie seats : " << maxSeats << endl;
        cout << "How much movie seats you wanna book : ";
        cin >> number;
        if (number <= maxSeats && number > 0)
        {
            cout << "Seats are available" << endl;
            maxSeats -= number;
        }
        else
        {
            cout << "Please enter a number of seats from available ones." << endl;
            seats();
        }
    }
    void main()
    {
        if (maxSeats <= 0)
        {
            cout << "All seats are reserved! " << endl;
        }
        else
        {
            cout << "You wanna see the available movies list or directly go to booking section (list/book) : ";
            cin >> sections;
            transform(sections.begin(), sections.end(), sections.begin(), ::tolower);
            if (sections == "list")
            {
                getList();
                ticketList();
            }
            else if (sections == "book")
            {
                movie();
                seats();
                cout << "In which row you want your seats (front,middle,end) : ";
                cin >> seatRow;
                transform(seatRow.begin(), seatRow.end(), seatRow.begin(), ::tolower);
                ticket();
                total = price * number;
                cout << "Enter Your name please : ";
                cin.ignore();
                getline(cin, name);
                cout << "Would you like to enter your phone number to get promotional messages (yes/no) : ";
                string input3;
                cin >> input3;
                transform(input3.begin(), input3.end(), input3.begin(), ::tolower);

                if (input3 == "yes")
                {
                    PhoneNum();
                }
                else if (input3 == "no")
                {
                    // Do nothing
                }
                else
                {
                    cout << "Please respond with yes or no." << endl;
                }
                cout << "Your total is : " << total << endl;
                cout << "Tickets reserved successfully. You can get your receipt from theaterReceipt.txt" << endl;
                cout << "Thanks for visiting..." << endl;
                receipt();
                identity();
            }
            else
            {
                cout << "Please respond with list or book." << endl;
                main();
            }
        }
    }

    void receipt()
    {
        ofstream file2("theaterReceipt.txt");
        if (file2.is_open())
        {
            file2 << "Name : " << name << endl;
            if (!strPhoneNumber.empty())
            {
                file2 << "Phone Number : " << strPhoneNumber.substr(0, 3) << "******" << strPhoneNumber.substr(7) << endl;
            }
            file2 << "Movie : " << CmovieName << endl;
            file2 << "Total Tickets : " << number << endl;
            file2 << "Total Prices : " << total << endl;
            file2 << "---Hope you will have great---" << endl;
            file2 << "For any complaints or suggestions mail at\nexample@gmail.com" << endl;
            file2.close();
        }
        else
        {
            cout << "Unable to open file for receipt" << endl;
        }
    }
};

int main()
{
    Theater t1;
}