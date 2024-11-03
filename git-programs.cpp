#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

void menuLocal();
// Презагрузка
void startPrograms() {
    cout << "=======================================\n";
    cout << "\x1b[33m" << "Программа помощник по GIT и GITHUB\x1b[0m\n";
    cout << "=======================================\n\n";
    cout << "=======================================\n";
    cout << "\x1b[32mПравила использования программы:\x1b[0m\n";
    cout << "---------------------------------------\n";
    cout << "\x1b[36mВам необходимо поместить данную\nпрограмму в корень папки, в которой\nбудете работать и с которой будут\nвыполняться команды!\x1b[0m\n";
    cout << "=======================================\n\n";
    cout << "=======================================\n";
    cout << "\x1b[31mСоздатель программы: Pensukdeath\x1b[0m\n";
    cout << "---------------------------------------\n";
    cout << "\x1b[31mВерсия: 1.0\x1b[0m\n";
    cout << "=======================================\n";
    cout << "Данная программа создана для людей,\n";
    cout << "которые плохо запоминают команды.\n";
    cout << "Программа очень сырая, пишу пока\n";
    cout << "что её на коленке, но будет дальнейшая\n";
    cout << "реализация. Пока работает только\n";
    cout << "работа с локальными репозиториями.\n";
    cout << "Вы спросите, для чего она нужна,\n";
    cout << "когда есть Git на ПК, честно я сам\n";
    cout << "не знаю, возможно кому-то пригодится.\n";
    cout << "=======================================\n\n";

    system("pause");
}
// Стартовое меню
void startMenu() {
    int num_menu = 0;
    while (true) {
        cout << "=======================================\n";
        cout << "\x1b[36mС каким репозиторием работаем?\x1b[0m\n";
        cout << "=======================================\n";
        cout << "1 - Работа с локальным репозиторием\n";
        cout << "2 - Работа с удалённым репозиторием\n";
        cout << "---------------------------------------\n";
        cout << "0 - Завершить программу\n";
        cout << "=======================================\n";
        cin >> num_menu;
        cout << "=======================================\n";
        if (num_menu == 0 || num_menu <= 2) {
            system("cls");
            break;
        }
        else {
            cout << "\x1b[31mОшибка ввода!\x1b[0m\n";
            cout << "=======================================\n";
            system("pause");
            system("cls");
        }
    }
    if (num_menu == 1) {
        menuLocal();
    }
    else if (num_menu == 2) {

    }
    else {
        exit(0);
    }
}
// Локальный репозиторий
void menuLocal() {
    int num_menu = 0;
    while (true) {
        cout << "=======================================\n";
        cout << "\x1b[36mВыберите действие:\x1b[0m\n";
        cout << "=======================================\n";
        cout << "1 - Узнать версию GIT\n";
        cout << "2 - Проверить текущее состояние репозитория\n";
        cout << "3 - Создать локальный репозиторий \n";
        cout << "4 - Сделать все файлы отслеживаемыми\n";
        cout << "5 - Сделать коммит\n";
        cout << "6 - Исправить последний коммит\n";
        cout << "7 - Посмотреть всю историю с ID коммитов\n";
        cout << "8 - Посмотреть информацию о коммитах\n";
        cout << "---------------------------------------\n";
        cout << "0 - Назад\n";
        cout << "=======================================\n";
        cin >> num_menu;
        cout << "=======================================\n";
        if (num_menu >= 0 || num_menu <= 15) {
            if (num_menu == 1) {
                cout << "Вы ввели команду:\n";
                cout << "---------------------------------------\n";
                cout << "git --version\n";
                cout << "---------------------------------------\n";
                system("git --version");
                system("pause");
            }
            else if (num_menu == 2) {
                cout << "Вы ввели команду:\n";
                cout << "---------------------------------------\n";
                cout << "git status\n";
                cout << "---------------------------------------\n";
                system("git status");
                system("pause");
            }
            else if (num_menu == 3) {
                cout << "Вы ввели команду:\n";
                cout << "---------------------------------------\n";
                cout << "git init\n";
                cout << "---------------------------------------\n";
                system("git init");
                system("pause");
            }
            else if (num_menu == 4) {
                cout << "Вы ввели команду:\n";
                cout << "---------------------------------------\n";
                cout << "git add -A\n";
                cout << "---------------------------------------\n";
                system("git add -A");
                system("pause");
            }
            else if (num_menu == 5) {
                cout << "Введите текст коммита: ";
                string commit;
                cin.ignore();
                getline (cin, commit);
                cout << "Вы ввели команду:\n";
                cout << "---------------------------------------\n";
                cout << "git commit -m \"" << commit << "\"\n";
                cout << "---------------------------------------\n";
                string cmd_command = "git commit - m \"" + commit + "\"";
                system(cmd_command.c_str());
                system("pause");
            }
            else if (num_menu == 5) {
                cout << "Введите текст коммита: ";
                string commit;
                cin.ignore();
                getline(cin, commit);
                cout << "Вы ввели команду:\n";
                cout << "---------------------------------------\n";
                cout << "git commit --amend -m \"" << commit << "\"\n";
                cout << "---------------------------------------\n";
                string cmd_command = "git commit --amend -m \"" + commit + "\"";
                system(cmd_command.c_str());
                system("pause");
            }
            else if (num_menu == 7) {
                cout << "Вы ввели команду:\n";
                cout << "---------------------------------------\n";
                cout << "git log --all --oneline\n";
                cout << "---------------------------------------\n";
                system("git log --all --oneline");
                system("pause");
            }
            else if (num_menu == 8) {
                cout << "Вы ввели команду:\n";
                cout << "---------------------------------------\n";
                cout << "git log\n";
                cout << "---------------------------------------\n";
                system("git log");
                system("pause");
            }
            else if (num_menu == 9) {
                cout << "Введите хеш(id) коммита: ";
                string commit;
                cin.ignore();
                getline(cin, commit);
                cout << "Вы ввели команду:\n";
                cout << "---------------------------------------\n";
                cout << "git checkout \"" << commit << "\"\n";
                cout << "---------------------------------------\n";
                string cmd_command = "git checkout \"" + commit + "\"";
                system(cmd_command.c_str());
                system("pause");
            }
            else {
                system("cls");
                startMenu();
            }
            //break;
        }
        else {
            cout << "=======================================\n";
            cout << "\x1b[31mОшибка ввода!\x1b[0m\n";
            cout << "=======================================\n";
            system("pause");
            system("cls");
        }
    }

}
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");
    
    system("cls"); // Чистка консоли.
    startPrograms();
    system("cls"); // Чистка консоли.
    startMenu();

    return 0;
}
