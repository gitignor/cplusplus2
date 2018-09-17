/*
 * Aleksei Nikiforov TARgv17. Домашнее задание №3
 * Ограничение вывода треугольника:
 * Мин высота - 1
 * Макс высота - 30
 * */
#include <QCoreApplication>
#include <QDebug>
#include <QString>
#include <QTextStream>
#include <QString>

void printTriangle(int N); //Function header to print triangle and call function printMSpaseAndLStars N times

// main program, function headers shall be declare before main
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QTextStream cin(stdin);

    int height=0;
    while (height<=0 || height>30) {
        QString askTriangle = "Введите высоту треугольника. Минимальная высота равна 1. Максимальная высота равна 30 условным единицам";
        qDebug() << askTriangle;
        cin >>height;
    }

    qDebug() << "Начинаю рисовать треугольник высотой"<< height << "условных единиц\n";
    printTriangle(height); // call function printTriangle with arg height
    qDebug() << "\nТреугольник нарисован!\nКонец выполнения программы";
    return a.exec();
}

void printTriangle(int N) //Function body
{
    QTextStream cout(stdout);

    for (int i = 0; i < N; i++)
        {
            for (int j = N-i; j > 1; j--) // Выводим "окуржение" треугольника
                cout << " ";
            for (int k = 0; k <= (i+i)*2; k+=2) // Выводим линию трегольника
                cout << "*";
            cout << "\n"; // Переходим на новую строку, чтобы отрисовать следующую линию треугольника
        }
}
