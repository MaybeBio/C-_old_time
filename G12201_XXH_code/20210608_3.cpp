#include <iostream>
#include <iomanip>
#include <fstream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));

    fstream file; //fstream�������

    //���ɳɼ�
    int count = 50 + rand() % 20;      //ѧ������
    file.open("scores.txt", ios::out); //fstream���������Ҫָ�������뻹�����
    if (!file.is_open())
    {
        cerr << "file open error!\n";
        exit(1);
    }

    while (count)
    {
        file << setw(4) << 50 + rand() % 51;
        count--;
    }
    file.close();

    //��ʼͳ��
    count = 0;
    int maxscore = 0, minscore = 0;
    int L90 = 0, L80 = 0, L70 = 0, L60 = 0, L0 = 0;
    double avgScore = 0;
    file.open("scores.txt", ios::in); //�����ļ�
    if (file.is_open())
    {
        int data;
        while (file >> data)
        {
            if (0 == count)
                maxscore = minscore = data;
            else
            {
                if (data > maxscore)
                    maxscore = data;
                if (data < minscore)
                    minscore = data;
            }
            switch (data / 10)
            {
            case 10:
            case 9:
                L90++;
                break;
            case 8:
                L80++;
                break;
            case 7:
                L70++;
                break;
            case 6:
                L60++;
                break;
            default:
                L0++;
            }

            avgScore += data;
            count++;
        }
        avgScore /= count;
        file.close(); //close�ļ�
    }
    else
    {
        cerr << "file open error!\n";
        exit(1);
    }

    //��ʼ�����result.txt��
    file.open("result.txt", ios::out);
    if (!file)
    {
        cerr << "file open error!\n";
        exit(1);
    }
    file << "������:  " << count << endl;
    file << "��߷�:  " << maxscore << endl;
    file << "��ͷ�:  " << minscore << endl;
    file << "ƽ����:  " << avgScore << endl;
    file << endl;
    file << setw(8) << "90-100:" << setw(4) << L90 << ", �ٷֱȣ�" << setw(5) << (int)((float)L90 / count * 100 + 0.5) << "%\n";
    file << setw(8) << "80-89:" << setw(4) << L80 << ", �ٷֱȣ�" << setw(5) << (int)((float)L80 / count * 100 + 0.5) << "%\n";
    file << setw(8) << "70-79:" << setw(4) << L70 << ", �ٷֱȣ�" << setw(5) << (int)((float)L70 / count * 100 + 0.5) << "%\n";
    file << setw(8) << "60-69:" << setw(4) << L60 << ", �ٷֱȣ�" << setw(5) << (int)((float)L60 / count * 100 + 0.5) << "%\n";
    file << setw(8) << "0-59:" << setw(4) << L0 << ", �ٷֱȣ�" << setw(5) << (int)((float)L0 / count * 100 + 0.5) << "%\n";
    file.close();

    cout << "Done!\n";
}