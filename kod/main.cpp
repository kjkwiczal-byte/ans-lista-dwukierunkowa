#include <iostream>
#include "DoublyLinkedList.h"

using namespace std;

int main() {
    cout << "--- TESTOWANIE LISTY DWUKIERUNKOWEJ ---" << endl;
    DoublyLinkedList list;

    // 1. Dodawanie elementow
    list.push_back(10);
    list.push_back(20);
    list.push_front(5);
    list.insert_at(2, 15); // Lista powinna wygladac: 5 10 15 20
    
    // 2. Wyswietlanie
    list.print();
    list.print_reverse();

    // 3. Usuwanie
    cout << "\nUsuwanie pierwszego i ostatniego elementu..." << endl;
    list.pop_front();
    list.pop_back();
    list.print(); // Zostanie: 10 15

    cout << "\nUsuwanie elementu z indeksu 0..." << endl;
    list.remove_at(0);
    list.print(); // Zostanie: 15

    // 4. Testowanie Iteratora
    cout << "\n--- TESTOWANIE ITERATORA ---" << endl;
    list.push_back(20);
    list.push_back(30);
    list.push_back(40);
    list.print(); // Lista: 15 20 30 40
    
    ListIterator it = list.getIterator();
    it.printCurrent(); // Powinno byc 15
    cout << "Przejscie do nastepnego..." << endl;
    it.next();
    it.printCurrent(); // Powinno byc 20
    cout << "Przejscie do poprzedniego..." << endl;
    it.prev();
    it.printCurrent(); // Powinno byc znowu 15

    // 5. Czyszczenie
    list.clear();
    cout << "\nPo wyczyszczeniu: ";
    list.print();

    cout << "Zakonczono testy struktury." << endl;

    return 0;
}