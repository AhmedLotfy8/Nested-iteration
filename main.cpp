#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

int main()
{
    int n, i, j, k, l, x, s, p;
    cout << "Enter number of iterations: ";
    cin >> p;
    cout << endl;

    for (int n=1; n<=p; n++) {

            system("cls");

    cout << "Iteration: " << n << endl << endl;

    for (int i=1; i<=n; i++) {

        for (int j=1; j<=n-i; j++)
               cout << " ";

        for (int k=1; k<=i; k++) {
            cout << "\\" ;
          //  system("Color 4");
            }

            for (int l=i-1; l>=1; l--) {
             cout << "/";
           //  system("Color 3");
             }

        for (int x=i; x<=i; x++)
            cout << "          ";

        for (int k=n; k>=i; k--) {
            cout << "<";
           // system("Color 2");
            }

        for (int l=n-2; l>=i; l--) {
            cout << ">";
          //  system("Color 1");
             }

        cout << endl;
    }

     for (int i=1; i<=n; i++) {

        for (int j=n+i-1; j>=n+1; j--)
            cout << " ";

        for (int k=n; k>=i; k--) {
            cout << "q";
          //  system("Color 5");
             }

        for (int l=n-1; l>=i; l--) {
            cout << "p";
          //  system("Color 6");
            }

        for (int x=i; x<=i; x++)
            cout << "          ";

        for (int k=1; k<=i; k++) {
            cout << "d" ;
          //  system("Color 7");
            }

        for (int l=i-1; l>=1; l--) {
            cout << "b";
        //    system("Color 9");
             }

        cout << endl;
    }

  cout << endl;

//    getch(); //uncomment to control animation speed
    Sleep(100); //comment to control animation speed
    }
    return 0;
}
