#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout<<"MADE AT 17th March 2019"<<endl<<endl;
    int counterx=0,countero=0;
    char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
    //multidimensional array!!
    int choice;
    cout<<"\t     WELCOME TO\n";
    cout<<" \t\tTIC TAC TOE GAME\n";
    cout<<"\n\n\n";
    cout<<"Player 1-->[X]\n";
    cout<<"Player 2-->[o]\n";

    cout<<"\n\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[0][0]<<"  |  "<<board[0][1]<<"  |   "<<board[0][2]<<" \n";
    cout<<"\t\t\t_____|_____|_____\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[1][0]<<"  |  "<<board[1][1]<<"  |   "<<board[1][2]<<" \n";
    cout<<"\t\t\t_____|_____|_____\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[2][0]<<"  |  "<<board[2][1]<<"  |   "<<board[2][2]<<" \n";
    cout<<"\t\t\t     |     |     \n";

    cout<<"\n Player1[X] move: ";
    cin>>choice;

    switch(choice)
    {
        case 1:
            board[0][0]='X';
            break;
        case 2:
            board[0][1]='X';
            break;
        case 3:
            board[0][2]='X';
            break;
        case 4:
            board[1][0]='X';
            break;
        case 5:
            board[1][1]='X';
            break;
        case 6:
            board[1][2]='X';
            break;
        case 7:
            board[2][0]='X';
            break;
        case 8:
            board[2][1]='X';
            break;
        case 9:
            board[2][2]='X';
            break;
        default :
            cout<<"Ïnvalid Number\n";
            break;

    }
    cout<<"\n\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[0][0]<<"  |  "<<board[0][1]<<"  |   "<<board[0][2]<<" \n";
    cout<<"\t\t\t_____|_____|_____\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[1][0]<<"  |  "<<board[1][1]<<"  |   "<<board[1][2]<<" \n";
    cout<<"\t\t\t_____|_____|_____\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[2][0]<<"  |  "<<board[2][1]<<"  |   "<<board[2][2]<<" \n";
    cout<<"\t\t\t     |     |     \n";

    cout<<"\n Player2[O] move: ";
    cin>>choice;
        switch(choice)
        {
                case 1:
            board[0][0]='O';
            break;
        case 2:
            board[0][1]='O';
            break;
        case 3:
            board[0][2]='O';
            break;
        case 4:
            board[1][0]='O';
            break;
        case 5:
            board[1][1]='O';
            break;
        case 6:
            board[1][2]='O';
            break;
        case 7:
            board[2][0]='O';
            break;
        case 8:
            board[2][1]='O';
            break;
        case 9:
            board[2][2]='O';
            break;
        default :
            cout<<"Ïnvalid Number\n";
            break;
        }

    cout<<"\n\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[0][0]<<"  |  "<<board[0][1]<<"  |   "<<board[0][2]<<" \n";
    cout<<"\t\t\t_____|_____|_____\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[1][0]<<"  |  "<<board[1][1]<<"  |   "<<board[1][2]<<" \n";
    cout<<"\t\t\t_____|_____|_____\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[2][0]<<"  |  "<<board[2][1]<<"  |   "<<board[2][2]<<" \n";
    cout<<"\t\t\t     |     |     \n";


    cout<<"\n Player1[X] move: ";
    cin>>choice;
            switch(choice)
    {
                case 1:
            board[0][0]='X';
            break;
        case 2:
            board[0][1]='X';
            break;
        case 3:
            board[0][2]='X';
            break;
        case 4:
            board[1][0]='X';
            break;
        case 5:
            board[1][1]='X';
            break;
        case 6:
            board[1][2]='X';
            break;
        case 7:
            board[2][0]='X';
            break;
        case 8:
            board[2][1]='X';
            break;
        case 9:
            board[2][2]='X';
            break;
        default :
            cout<<"Ïnvalid Number\n";
            break;
            }


            if(board[0][0]==board[0][1] && board[0][0]==board[0][2] || board[1][0]==board[1][1] && board[1][0]==board[1][2] || board[2][0]==board[2][1] && board[2][0]==board[2][2])

            {
                    cout<<"\n\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[0][0]<<"  |  "<<board[0][1]<<"  |   "<<board[0][2]<<" \n";
    cout<<"\t\t\t_____|_____|_____\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[1][0]<<"  |  "<<board[1][1]<<"  |   "<<board[1][2]<<" \n";
    cout<<"\t\t\t_____|_____|_____\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[2][0]<<"  |  "<<board[2][1]<<"  |   "<<board[2][2]<<" \n";
    cout<<"\t\t\t     |     |     \n";

                cout<<"Congratulation the last moved player!!";
                cout<<"thanks for playing the game\n";
                return 0;

            }
            else if(board[0][0]==board[1][1] && board[0][0]==board[2][2] || board[2][0]==board[1][1] && board[2][0]==board[0][2])
            {
                    cout<<"\n\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[0][0]<<"  |  "<<board[0][1]<<"  |   "<<board[0][2]<<" \n";
    cout<<"\t\t\t_____|_____|_____\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[1][0]<<"  |  "<<board[1][1]<<"  |   "<<board[1][2]<<" \n";
    cout<<"\t\t\t_____|_____|_____\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[2][0]<<"  |  "<<board[2][1]<<"  |   "<<board[2][2]<<" \n";
    cout<<"\t\t\t     |     |     \n";

                cout<<"Congratulation the last moved player!!";
                cout<<"thanks for playing the game\n";
                return 0;
            }
            else if(board[0][0]==board[1][0] && board[0][0]==board[2][0] || board[0][1]==board[1][1] && board[0][1]==board[2][1] || board[0][2]==board[1][2] && board[0][2]==board[2][2])
            {
                    cout<<"\n\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[0][0]<<"  |  "<<board[0][1]<<"  |   "<<board[0][2]<<" \n";
    cout<<"\t\t\t_____|_____|_____\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[1][0]<<"  |  "<<board[1][1]<<"  |   "<<board[1][2]<<" \n";
    cout<<"\t\t\t_____|_____|_____\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[2][0]<<"  |  "<<board[2][1]<<"  |   "<<board[2][2]<<" \n";
    cout<<"\t\t\t     |     |     \n";

                cout<<"Congratulation the last moved player!!";
                cout<<"thanks for playing the game\n";
                return 0;
            }


    cout<<"\n\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[0][0]<<"  |  "<<board[0][1]<<"  |   "<<board[0][2]<<" \n";
    cout<<"\t\t\t_____|_____|_____\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[1][0]<<"  |  "<<board[1][1]<<"  |   "<<board[1][2]<<" \n";
    cout<<"\t\t\t_____|_____|_____\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[2][0]<<"  |  "<<board[2][1]<<"  |   "<<board[2][2]<<" \n";
    cout<<"\t\t\t     |     |     \n";

    cout<<"\n Player2[O] move: ";
    cin>>choice;

        switch(choice)
    {
        case 1:
            board[0][0]='O';
            break;
        case 2:
            board[0][1]='O';
            break;
        case 3:
            board[0][2]='O';
            break;
        case 4:
            board[1][0]='O';
            break;
        case 5:
            board[1][1]='O';
            break;
        case 6:
            board[1][2]='O';
            break;
        case 7:
            board[2][0]='O';
            break;
        case 8:
            board[2][1]='O';
            break;
        case 9:
            board[2][2]='O';
            break;
        default :
            cout<<"Ïnvalid Number\n";
            break;

    }
                if(board[0][0]==board[0][1] && board[0][0]==board[0][2] || board[1][0]==board[1][1] && board[1][0]==board[1][2] || board[2][0]==board[2][1] && board[2][0]==board[2][2])

            {
                    cout<<"\n\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[0][0]<<"  |  "<<board[0][1]<<"  |   "<<board[0][2]<<" \n";
    cout<<"\t\t\t_____|_____|_____\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[1][0]<<"  |  "<<board[1][1]<<"  |   "<<board[1][2]<<" \n";
    cout<<"\t\t\t_____|_____|_____\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[2][0]<<"  |  "<<board[2][1]<<"  |   "<<board[2][2]<<" \n";
    cout<<"\t\t\t     |     |     \n";

                cout<<"Congratulation the last moved player!!";
                cout<<"thanks for playing the game\n";
                return 0;

            }
            else if(board[0][0]==board[1][1] && board[0][0]==board[2][2] || board[2][0]==board[1][1] && board[2][0]==board[0][2])
            {
                    cout<<"\n\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[0][0]<<"  |  "<<board[0][1]<<"  |   "<<board[0][2]<<" \n";
    cout<<"\t\t\t_____|_____|_____\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[1][0]<<"  |  "<<board[1][1]<<"  |   "<<board[1][2]<<" \n";
    cout<<"\t\t\t_____|_____|_____\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[2][0]<<"  |  "<<board[2][1]<<"  |   "<<board[2][2]<<" \n";
    cout<<"\t\t\t     |     |     \n";

                cout<<"Congratulation the last moved player!!";
                cout<<"thanks for playing the game\n";
                return 0;
            }
            else if(board[0][0]==board[1][0] && board[0][0]==board[2][0] || board[0][1]==board[1][1] && board[0][1]==board[2][1] || board[0][2]==board[1][2] && board[0][2]==board[2][2])
            {
                    cout<<"\n\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[0][0]<<"  |  "<<board[0][1]<<"  |   "<<board[0][2]<<" \n";
    cout<<"\t\t\t_____|_____|_____\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[1][0]<<"  |  "<<board[1][1]<<"  |   "<<board[1][2]<<" \n";
    cout<<"\t\t\t_____|_____|_____\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[2][0]<<"  |  "<<board[2][1]<<"  |   "<<board[2][2]<<" \n";
    cout<<"\t\t\t     |     |     \n";

                cout<<"Congratulation the last moved player!!";
                cout<<"thanks for playing the game\n";
                return 0;
            }
        cout<<"\n\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[0][0]<<"  |  "<<board[0][1]<<"  |   "<<board[0][2]<<" \n";
    cout<<"\t\t\t_____|_____|_____\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[1][0]<<"  |  "<<board[1][1]<<"  |   "<<board[1][2]<<" \n";
    cout<<"\t\t\t_____|_____|_____\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[2][0]<<"  |  "<<board[2][1]<<"  |   "<<board[2][2]<<" \n";
    cout<<"\t\t\t     |     |     \n";


    cout<<"\n Player1[X] move: ";
    cin>>choice;
            switch(choice)
    {
                case 1:
            board[0][0]='X';
            break;
        case 2:
            board[0][1]='X';
            break;
        case 3:
            board[0][2]='X';
            break;
        case 4:
            board[1][0]='X';
            break;
        case 5:
            board[1][1]='X';
            break;
        case 6:
            board[1][2]='X';
            break;
        case 7:
            board[2][0]='X';
            break;
        case 8:
            board[2][1]='X';
            break;
        case 9:
            board[2][2]='X';
            break;
        default :
            cout<<"Ïnvalid Number\n";
            break;
    }
                if(board[0][0]==board[0][1] && board[0][0]==board[0][2] || board[1][0]==board[1][1] && board[1][0]==board[1][2] || board[2][0]==board[2][1] && board[2][0]==board[2][2])

            {
                    cout<<"\n\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[0][0]<<"  |  "<<board[0][1]<<"  |   "<<board[0][2]<<" \n";
    cout<<"\t\t\t_____|_____|_____\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[1][0]<<"  |  "<<board[1][1]<<"  |   "<<board[1][2]<<" \n";
    cout<<"\t\t\t_____|_____|_____\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[2][0]<<"  |  "<<board[2][1]<<"  |   "<<board[2][2]<<" \n";
    cout<<"\t\t\t     |     |     \n";

                cout<<"Congratulation the last moved player!!";
                cout<<"thanks for playing the game\n";
                return 0;

            }
            else if(board[0][0]==board[1][1] && board[0][0]==board[2][2] || board[2][0]==board[1][1] && board[2][0]==board[0][2])
            {
                    cout<<"\n\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[0][0]<<"  |  "<<board[0][1]<<"  |   "<<board[0][2]<<" \n";
    cout<<"\t\t\t_____|_____|_____\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[1][0]<<"  |  "<<board[1][1]<<"  |   "<<board[1][2]<<" \n";
    cout<<"\t\t\t_____|_____|_____\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[2][0]<<"  |  "<<board[2][1]<<"  |   "<<board[2][2]<<" \n";
    cout<<"\t\t\t     |     |     \n";

                cout<<"Congratulation the last moved player!!";
                cout<<"thanks for playing the game\n";
                return 0;
            }
            else if(board[0][0]==board[1][0] && board[0][0]==board[2][0] || board[0][1]==board[1][1] && board[0][1]==board[2][1] || board[0][2]==board[1][2] && board[0][2]==board[2][2])
            {
                    cout<<"\n\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[0][0]<<"  |  "<<board[0][1]<<"  |   "<<board[0][2]<<" \n";
    cout<<"\t\t\t_____|_____|_____\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[1][0]<<"  |  "<<board[1][1]<<"  |   "<<board[1][2]<<" \n";
    cout<<"\t\t\t_____|_____|_____\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[2][0]<<"  |  "<<board[2][1]<<"  |   "<<board[2][2]<<" \n";
    cout<<"\t\t\t     |     |     \n";

                cout<<"Congratulation the last moved player!!";
                cout<<"thanks for playing the game\n";
                return 0;
            }
            cout<<"\n\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[0][0]<<"  |  "<<board[0][1]<<"  |   "<<board[0][2]<<" \n";
    cout<<"\t\t\t_____|_____|_____\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[1][0]<<"  |  "<<board[1][1]<<"  |   "<<board[1][2]<<" \n";
    cout<<"\t\t\t_____|_____|_____\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[2][0]<<"  |  "<<board[2][1]<<"  |   "<<board[2][2]<<" \n";
    cout<<"\t\t\t     |     |     \n";

        cout<<"\n Player2[O] move: ";
    cin>>choice;

        switch(choice)
    {
        case 1:
            board[0][0]='O';
            break;
        case 2:
            board[0][1]='O';
            break;
        case 3:
            board[0][2]='O';
            break;
        case 4:
            board[1][0]='O';
            break;
        case 5:
            board[1][1]='O';
            break;
        case 6:
            board[1][2]='O';
            break;
        case 7:
            board[2][0]='O';
            break;
        case 8:
            board[2][1]='O';
            break;
        case 9:
            board[2][2]='O';
            break;
        default :
            cout<<"Ïnvalid Number\n";
            break;

    }
                if(board[0][0]==board[0][1] && board[0][0]==board[0][2] || board[1][0]==board[1][1] && board[1][0]==board[1][2] || board[2][0]==board[2][1] && board[2][0]==board[2][2])

            {
                    cout<<"\n\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[0][0]<<"  |  "<<board[0][1]<<"  |   "<<board[0][2]<<" \n";
    cout<<"\t\t\t_____|_____|_____\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[1][0]<<"  |  "<<board[1][1]<<"  |   "<<board[1][2]<<" \n";
    cout<<"\t\t\t_____|_____|_____\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[2][0]<<"  |  "<<board[2][1]<<"  |   "<<board[2][2]<<" \n";
    cout<<"\t\t\t     |     |     \n";


                cout<<"Congratulation the last moved player!!";
                cout<<"thanks for playing the game\n";
                return 0;

            }
            else if(board[0][0]==board[1][1] && board[0][0]==board[2][2] || board[2][0]==board[1][1] && board[2][0]==board[0][2])
            {
                    cout<<"\n\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[0][0]<<"  |  "<<board[0][1]<<"  |   "<<board[0][2]<<" \n";
    cout<<"\t\t\t_____|_____|_____\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[1][0]<<"  |  "<<board[1][1]<<"  |   "<<board[1][2]<<" \n";
    cout<<"\t\t\t_____|_____|_____\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[2][0]<<"  |  "<<board[2][1]<<"  |   "<<board[2][2]<<" \n";
    cout<<"\t\t\t     |     |     \n";

                cout<<"Congratulation the last moved player!!";
                cout<<"thanks for playing the game\n";
                return 0;
            }
            else if(board[0][0]==board[1][0] && board[0][0]==board[2][0] || board[0][1]==board[1][1] && board[0][1]==board[2][1] || board[0][2]==board[1][2] && board[0][2]==board[2][2])
            {
                    cout<<"\n\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[0][0]<<"  |  "<<board[0][1]<<"  |   "<<board[0][2]<<" \n";
    cout<<"\t\t\t_____|_____|_____\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[1][0]<<"  |  "<<board[1][1]<<"  |   "<<board[1][2]<<" \n";
    cout<<"\t\t\t_____|_____|_____\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[2][0]<<"  |  "<<board[2][1]<<"  |   "<<board[2][2]<<" \n";
    cout<<"\t\t\t     |     |     \n";

                cout<<"Congratulation the last moved player!!";
                cout<<"thanks for playing the game\n";
                return 0;
            }


    cout<<"\n\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[0][0]<<"  |  "<<board[0][1]<<"  |   "<<board[0][2]<<" \n";
    cout<<"\t\t\t_____|_____|_____\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[1][0]<<"  |  "<<board[1][1]<<"  |   "<<board[1][2]<<" \n";
    cout<<"\t\t\t_____|_____|_____\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[2][0]<<"  |  "<<board[2][1]<<"  |   "<<board[2][2]<<" \n";

    cout<<"\t\t\t     |     |     \n";

        cout<<"\n Player1[X] move: ";
    cin>>choice;
            switch(choice)
    {
                case 1:
            board[0][0]='X';
            break;
        case 2:
            board[0][1]='X';
            break;
        case 3:
            board[0][2]='X';
            break;
        case 4:
            board[1][0]='X';
            break;
        case 5:
            board[1][1]='X';
            break;
        case 6:
            board[1][2]='X';
            break;
        case 7:
            board[2][0]='X';
            break;
        case 8:
            board[2][1]='X';
            break;
        case 9:
            board[2][2]='X';
            break;
        default :
            cout<<"Ïnvalid Number\n";
            break;
    }
                if(board[0][0]==board[0][1] && board[0][0]==board[0][2] || board[1][0]==board[1][1] && board[1][0]==board[1][2] || board[2][0]==board[2][1] && board[2][0]==board[2][2])

            {
                    cout<<"\n\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[0][0]<<"  |  "<<board[0][1]<<"  |   "<<board[0][2]<<" \n";
    cout<<"\t\t\t_____|_____|_____\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[1][0]<<"  |  "<<board[1][1]<<"  |   "<<board[1][2]<<" \n";
    cout<<"\t\t\t_____|_____|_____\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[2][0]<<"  |  "<<board[2][1]<<"  |   "<<board[2][2]<<" \n";
    cout<<"\t\t\t     |     |     \n";

                cout<<"Congratulation the last moved player!!";
                cout<<"thanks for playing the game\n";
                return 0;
            }
            else if(board[0][0]==board[1][1] && board[0][0]==board[2][2] || board[2][0]==board[1][1] && board[2][0]==board[0][2])
            {
                    cout<<"\n\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[0][0]<<"  |  "<<board[0][1]<<"  |   "<<board[0][2]<<" \n";
    cout<<"\t\t\t_____|_____|_____\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[1][0]<<"  |  "<<board[1][1]<<"  |   "<<board[1][2]<<" \n";
    cout<<"\t\t\t_____|_____|_____\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[2][0]<<"  |  "<<board[2][1]<<"  |   "<<board[2][2]<<" \n";
    cout<<"\t\t\t     |     |     \n";

                cout<<" Congratulation the last moved player!!";
                cout<<" Thank you for playing the game\n";
                return 0;
            }
            else if(board[0][0]==board[1][0] && board[0][0]==board[2][0] || board[0][1]==board[1][1] && board[0][1]==board[2][1] || board[0][2]==board[1][2] && board[0][2]==board[2][2])
            {
                    cout<<"\n\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[0][0]<<"  |  "<<board[0][1]<<"  |   "<<board[0][2]<<" \n";
    cout<<"\t\t\t_____|_____|_____\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[1][0]<<"  |  "<<board[1][1]<<"  |   "<<board[1][2]<<" \n";
    cout<<"\t\t\t_____|_____|_____\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[2][0]<<"  |  "<<board[2][1]<<"  |   "<<board[2][2]<<" \n";
    cout<<"\t\t\t     |     |     \n";


                cout<<"Congratulation the last moved player!!";
                cout<<"thanks for playing the game\n";
                return 0;
            }
    cout<<"\n\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[0][0]<<"  |  "<<board[0][1]<<"  |   "<<board[0][2]<<" \n";
    cout<<"\t\t\t_____|_____|_____\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[1][0]<<"  |  "<<board[1][1]<<"  |   "<<board[1][2]<<" \n";
    cout<<"\t\t\t_____|_____|_____\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[2][0]<<"  |  "<<board[2][1]<<"  |   "<<board[2][2]<<" \n";
    cout<<"\t\t\t     |     |     \n";

    cout<<"\n Player2[O] move: ";
    cin>>choice;

        switch(choice)
    {
        case 1:
            board[0][0]='O';
            break;
        case 2:
            board[0][1]='O';
            break;
        case 3:
            board[0][2]='O';
            break;
        case 4:
            board[1][0]='O';
            break;
        case 5:
            board[1][1]='O';
            break;
        case 6:
            board[1][2]='O';
            break;
        case 7:
            board[2][0]='O';
            break;
        case 8:
            board[2][1]='O';
            break;
        case 9:
            board[2][2]='O';
            break;
        default :
            cout<<"Ïnvalid Number\n";
            break;

    }
                if(board[0][0]==board[0][1] && board[0][0]==board[0][2] || board[1][0]==board[1][1] && board[1][0]==board[1][2] || board[2][0]==board[2][1] && board[2][0]==board[2][2])

            {
                    cout<<"\n\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[0][0]<<"  |  "<<board[0][1]<<"  |   "<<board[0][2]<<" \n";
    cout<<"\t\t\t_____|_____|_____\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[1][0]<<"  |  "<<board[1][1]<<"  |   "<<board[1][2]<<" \n";
    cout<<"\t\t\t_____|_____|_____\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[2][0]<<"  |  "<<board[2][1]<<"  |   "<<board[2][2]<<" \n";
    cout<<"\t\t\t     |     |     \n";

                cout<<"Congratulation the last moved player!!";
                cout<<"thanks for playing the game\n";
                return 0;

            }
            else if(board[0][0]==board[1][1] && board[0][0]==board[2][2] || board[2][0]==board[1][1] && board[2][0]==board[0][2])
            {
                    cout<<"\n\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[0][0]<<"  |  "<<board[0][1]<<"  |   "<<board[0][2]<<" \n";
    cout<<"\t\t\t_____|_____|_____\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[1][0]<<"  |  "<<board[1][1]<<"  |   "<<board[1][2]<<" \n";
    cout<<"\t\t\t_____|_____|_____\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[2][0]<<"  |  "<<board[2][1]<<"  |   "<<board[2][2]<<" \n";
    cout<<"\t\t\t     |     |     \n";

                cout<<"Congratulation the last moved player!!";
                cout<<"thanks for playing the game\n";
                return 0;
            }
            else if(board[0][0]==board[1][0] && board[0][0]==board[2][0] || board[0][1]==board[1][1] && board[0][1]==board[2][1] || board[0][2]==board[1][2] && board[0][2]==board[2][2])
            {

                    cout<<"\n\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[0][0]<<"  |  "<<board[0][1]<<"  |   "<<board[0][2]<<" \n";
    cout<<"\t\t\t_____|_____|_____\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[1][0]<<"  |  "<<board[1][1]<<"  |   "<<board[1][2]<<" \n";
    cout<<"\t\t\t_____|_____|_____\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[2][0]<<"  |  "<<board[2][1]<<"  |   "<<board[2][2]<<" \n";
    cout<<"\t\t\t     |     |     \n";

                cout<<"Congratulation the last moved player!!";
                cout<<"thanks for playing the game\n";
                return 0;
            }
    cout<<"\n\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[0][0]<<"  |  "<<board[0][1]<<"  |   "<<board[0][2]<<" \n";
    cout<<"\t\t\t_____|_____|_____\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[1][0]<<"  |  "<<board[1][1]<<"  |   "<<board[1][2]<<" \n";
    cout<<"\t\t\t_____|_____|_____\n";
    cout<<"\t\t\t     |     |     \n";
    cout<<"\t\t\t  "<<board[2][0]<<"  |  "<<board[2][1]<<"  |   "<<board[2][2]<<" \n";
    cout<<"\t\t\t     |     |     \n";

    cout<<"\n Player1[X] move: ";
    cin>>choice;

    switch(choice)
    {
        case 1:
            board[0][0]='X';
            break;
        case 2:
            board[0][1]='X';
            break;
        case 3:
            board[0][2]='X';
            break;
        case 4:
            board[1][0]='X';
            break;
        case 5:
            board[1][1]='X';
            break;
        case 6:
            board[1][2]='X';
            break;
        case 7:
            board[2][0]='X';
            break;
        case 8:
            board[2][1]='X';
            break;
        case 9:
            board[2][2]='X';
            break;
        default :
            cout<<"Ïnvalid Number\n";
            break;

    }
                if(board[0][0]==board[0][1] && board[0][0]==board[0][2] || board[1][0]==board[1][1] && board[1][0]==board[1][2] || board[2][0]==board[2][1] && board[2][0]==board[2][2])

            {
                    cout<<"\n\n";
                    cout<<"\t\t\t     |     |     \n";
                    cout<<"\t\t\t  "<<board[0][0]<<"  |  "<<board[0][1]<<"  |   "<<board[0][2]<<" \n";
                    cout<<"\t\t\t_____|_____|_____\n";
                    cout<<"\t\t\t     |     |     \n";
                    cout<<"\t\t\t  "<<board[1][0]<<"  |  "<<board[1][1]<<"  |   "<<board[1][2]<<" \n";
                    cout<<"\t\t\t_____|_____|_____\n";
                    cout<<"\t\t\t     |     |     \n";
                    cout<<"\t\t\t  "<<board[2][0]<<"  |  "<<board[2][1]<<"  |   "<<board[2][2]<<" \n";
                    cout<<"\t\t\t     |     |     \n";


                cout<<"Congratulation the last moved player!!";
                cout<<"thanks for playing the game\n";
                return 0;

            }
            else if(board[0][0]==board[1][1] && board[0][0]==board[2][2] || board[2][0]==board[1][1] && board[2][0]==board[0][2])
            {
                    cout<<"\n\n";
                    cout<<"\t\t\t     |     |     \n";
                    cout<<"\t\t\t  "<<board[0][0]<<"  |  "<<board[0][1]<<"  |   "<<board[0][2]<<" \n";
                    cout<<"\t\t\t_____|_____|_____\n";
                    cout<<"\t\t\t     |     |     \n";
                    cout<<"\t\t\t  "<<board[1][0]<<"  |  "<<board[1][1]<<"  |   "<<board[1][2]<<" \n";
                    cout<<"\t\t\t_____|_____|_____\n";
                    cout<<"\t\t\t     |     |     \n";
                    cout<<"\t\t\t  "<<board[2][0]<<"  |  "<<board[2][1]<<"  |   "<<board[2][2]<<" \n";
                    cout<<"\t\t\t     |     |     \n";


                cout<<"Congratulation the last moved player!!";
                cout<<"thanks for playing the game\n";
                return 0;
            }
            else if(board[0][0]==board[1][0] && board[0][0]==board[2][0] || board[0][1]==board[1][1] && board[0][1]==board[2][1] || board[0][2]==board[1][2] && board[0][2]==board[2][2])
            {
                    cout<<"\n\n";
                    cout<<"\t\t\t     |     |     \n";
                    cout<<"\t\t\t  "<<board[0][0]<<"  |  "<<board[0][1]<<"  |   "<<board[0][2]<<" \n";
                    cout<<"\t\t\t_____|_____|_____\n";
                    cout<<"\t\t\t     |     |     \n";
                    cout<<"\t\t\t  "<<board[1][0]<<"  |  "<<board[1][1]<<"  |   "<<board[1][2]<<" \n";
                    cout<<"\t\t\t_____|_____|_____\n";
                    cout<<"\t\t\t     |     |     \n";
                    cout<<"\t\t\t  "<<board[2][0]<<"  |  "<<board[2][1]<<"  |   "<<board[2][2]<<" \n";
                    cout<<"\t\t\t     |     |     \n";


                cout<<"Congratulation the last moved player!!";
                cout<<"thanks for playing the game\n";
                return 0;
            }
                    cout<<"\n\n";
                    cout<<"\t\t\t     |     |     \n";
                    cout<<"\t\t\t  "<<board[0][0]<<"  |  "<<board[0][1]<<"  |   "<<board[0][2]<<" \n";
                    cout<<"\t\t\t_____|_____|_____\n";
                    cout<<"\t\t\t     |     |     \n";
                    cout<<"\t\t\t  "<<board[1][0]<<"  |  "<<board[1][1]<<"  |   "<<board[1][2]<<" \n";
                    cout<<"\t\t\t_____|_____|_____\n";
                    cout<<"\t\t\t     |     |     \n";
                    cout<<"\t\t\t  "<<board[2][0]<<"  |  "<<board[2][1]<<"  |   "<<board[2][2]<<" \n";
                    cout<<"\t\t\t     |     |     \n";


            if(board[0][0]==board[0][1] && board[0][0]==board[0][2] || board[1][0]==board[1][1] && board[1][0]==board[1][2] || board[2][0]==board[2][1] && board[2][0]==board[2][2])

            {
                    cout<<"\n\n";
                    cout<<"\t\t\t     |     |     \n";
                    cout<<"\t\t\t  "<<board[0][0]<<"  |  "<<board[0][1]<<"  |   "<<board[0][2]<<" \n";
                    cout<<"\t\t\t_____|_____|_____\n";
                    cout<<"\t\t\t     |     |     \n";
                    cout<<"\t\t\t  "<<board[1][0]<<"  |  "<<board[1][1]<<"  |   "<<board[1][2]<<" \n";
                    cout<<"\t\t\t_____|_____|_____\n";
                    cout<<"\t\t\t     |     |     \n";
                    cout<<"\t\t\t  "<<board[2][0]<<"  |  "<<board[2][1]<<"  |   "<<board[2][2]<<" \n";
                    cout<<"\t\t\t     |     |     \n";

                cout<<"Congratulation the last moved player!!";
                cout<<"thanks for playing the game\n";
                return 0;
            }
            else if(board[0][0]==board[1][1] && board[0][0]==board[2][2] || board[2][0]==board[1][1] && board[2][0]==board[0][2])
            {
                    cout<<"\n\n";
                    cout<<"\t\t\t     |     |     \n";
                    cout<<"\t\t\t  "<<board[0][0]<<"  |  "<<board[0][1]<<"  |   "<<board[0][2]<<" \n";
                    cout<<"\t\t\t_____|_____|_____\n";
                    cout<<"\t\t\t     |     |     \n";
                    cout<<"\t\t\t  "<<board[1][0]<<"  |  "<<board[1][1]<<"  |   "<<board[1][2]<<" \n";
                    cout<<"\t\t\t_____|_____|_____\n";
                    cout<<"\t\t\t     |     |     \n";
                    cout<<"\t\t\t  "<<board[2][0]<<"  |  "<<board[2][1]<<"  |   "<<board[2][2]<<" \n";
                    cout<<"\t\t\t     |     |     \n";


                cout<<"Congratulation the last moved player!!";
                cout<<"thanks for playing the game\n";
                return 0;
            }
            else if(board[0][0]==board[1][0] && board[0][0]==board[2][0] || board[0][1]==board[1][1] && board[0][1]==board[2][1] || board[0][2]==board[1][2] && board[0][2]==board[2][2])
            {
                    cout<<"\n\n";
                    cout<<"\t\t\t     |     |     \n";
                    cout<<"\t\t\t  "<<board[0][0]<<"  |  "<<board[0][1]<<"  |   "<<board[0][2]<<" \n";
                    cout<<"\t\t\t_____|_____|_____\n";
                    cout<<"\t\t\t     |     |     \n";
                    cout<<"\t\t\t  "<<board[1][0]<<"  |  "<<board[1][1]<<"  |   "<<board[1][2]<<" \n";
                    cout<<"\t\t\t_____|_____|_____\n";
                    cout<<"\t\t\t     |     |     \n";
                    cout<<"\t\t\t  "<<board[2][0]<<"  |  "<<board[2][1]<<"  |   "<<board[2][2]<<" \n";
                    cout<<"\t\t\t     |     |     \n";

                cout<<"Congratulation the last moved player!!";
                cout<<"thanks for playing the game\n";
                return 0;
            }
            else{
                    cout<<"\n\n";
                    cout<<"\t\t\t     |     |     \n";
                    cout<<"\t\t\t  "<<board[0][0]<<"  |  "<<board[0][1]<<"  |   "<<board[0][2]<<" \n";
                    cout<<"\t\t\t_____|_____|_____\n";
                    cout<<"\t\t\t     |     |     \n";
                    cout<<"\t\t\t  "<<board[1][0]<<"  |  "<<board[1][1]<<"  |   "<<board[1][2]<<" \n";
                    cout<<"\t\t\t_____|_____|_____\n";
                    cout<<"\t\t\t     |     |     \n";
                    cout<<"\t\t\t  "<<board[2][0]<<"  |  "<<board[2][1]<<"  |   "<<board[2][2]<<" \n";
                    cout<<"\t\t\t     |     |     \n";

                cout<<" Well played guys it's a draw!"<<endl;
                return 0;
            }

}
