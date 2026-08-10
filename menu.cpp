#include<iostream>
using namespace std;

int main() {

 int arr[100];
 int n;
 cout << "Enter the number: ";
 cin >> n;

    // Create
 for(int i = 0; i <= (n - 1); i++) {

   cout << "Enter the array elements: ";
   cin >> arr[i];
    }

    int choice;

    do {

        cout << "\n\n----- MENU -----" << endl;
        cout << "1. CREATE" << endl;
        cout << "2. DISPLAY" << endl;
        cout << "3. INSERT" << endl;
        cout << "4. DELETE" << endl;
        cout << "5. LINEAR SEARCH" << endl;
        cout << "6. EXIT" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        // Display
        if(choice == 2) {

            cout << "Array: ";

            for(int i = 0; i <= (n - 1); i++) {
                cout << arr[i] << " ";
            }
        }

        // Insert
        else if(choice == 3) {

            int position;
            int value;

            cout << "Enter position: ";
            cin >> position;

            cout << "Enter value: ";
            cin >> value;

   for(int i = n; i > position; i--) {
        arr[i] = arr[i - 1];
     }

    arr[position] = value;

     n++;

     cout << "Array after insertion: ";

      for(int i = 0; i < n; i++) {
                cout << arr[i] << " ";
            }
        }

        // Delete
        else if(choice == 4) {

            int position;

            cout << "Enter position to delete: ";
            cin >> position;

            // Shift elements to the left
            for(int i = position; i < n - 1; i++) {
                arr[i] = arr[i + 1];
            }

            n--;

            cout << "Array after deletion: ";

            for(int i = 0; i < n; i++) {
                cout << arr[i] << " ";
            }
        }

        // Linear search
        else if(choice == 5) {

            int search;
            bool found = false;

            cout << "Enter element to search: ";
            cin >> search;

            for(int i = 0; i < n; i++) {

                if(arr[i] == search) {
                    cout << "Element found at index " << i << endl;
                    found = true;
                    break;
                }
            }

            if(found == false) {
                cout << "Element not found." << endl;
            }
        }

        // Exit
        else if(choice == 6) {

            cout << "Program exited." << endl;
        }

        else {
            cout << "Invalid choice." << endl;
        }

    } while(choice != 6);

    return 0;
}