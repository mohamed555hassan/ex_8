#include <iostream>
#include <vector>



using namespace std;

int main()
{

    vector<int> vec ;
    cout << "Enter a list of positive numbers : \n";
    cout<< "if we need to end this list should put a negative number : \n";
    int num;
    cin >> num;
    while (num > 0)
    {
        vec.push_back(num);
        cout << num << " added to my list \n";
        cout << "size of list = " <<vec.size( ) <<endl;
        cin >> num;
    }
    cout << "my list is :\n";
    for ( int i = 0; i <vec.size( ); i++)
        cout << vec[i] << " ";
    cout << endl<<"    "<<endl;

    int element = 0;
    int counter = 0;
    for (int i = 0 ; i < vec.size() ; i++)
    {
        int tempelement = vec [i];
        int tempcounter = 0;
        for (int j = 0 ; j< vec.size() ; j++)
            if (vec[j]== tempelement)
            {
                tempcounter++;
                element = tempelement;
                counter = tempcounter;
            }
    }
    cout<<"element is : "<<element<<endl;
    cout<<"counter is : "<<counter<<endl;








    return 0;
}
