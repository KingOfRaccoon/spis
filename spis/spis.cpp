#include <iostream>
#include "modSp.h"
using namespace std;
int main()
{
    list* first, * end;
    telem ch;
    setlocale(LC_ALL, "Russian");
    init_spis(&first, &end);
    cout << "\n Перенести в конец списка два его первых элемента " << endl;
    cout << "таким образом, чтобы последним в списке оказался тот" << endl;
    cout << "из них, значение которого меньше значения второго." << endl;
    cout << " Введите элементы списка (символы) сплошной строкой;"
        << " в конце - точка:" << endl;
    cin >> ch;
    while (ch != '.')
    {
        add_spis(ch, &first, &end);
        cin >> ch;
    }
    if (first && first->link)
    {
        cout << " Исходный список:" << endl;
        view_spis(first);
        cout << endl;
        obrabotka(&first,&end);
        view_spis(first);
        udal_spis(&first, &end);
    }
    else cout << "Список не создан или в нем меньше 2-х элементов";
    return 0;
}