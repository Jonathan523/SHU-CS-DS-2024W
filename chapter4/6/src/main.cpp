#include "SeqQueue.hpp"

int main()
{

    int max, num;
    int n;
    int e;
    int k;
    std::cout << "Input the max length of the queue : ";
    std::cin >> max;
    SeqQueue q(max);

    while (true) {
        std::cout << '\n';
        std::cout << "1.Enter the queue" << std::endl;
        std::cout << "2.Delete the elements" << std::endl;
        std::cout << "3.Show the queue" << std::endl;
        std::cout << '\n';

        std::cout << "Choose 1 / 2 / 3 / 0(To Esc): ";
        std::cin >> k;
        if (k == 0)
            break;

        else if (k == 1) {
            std::cout << "Input the number of the elements you want to enter: ";
            std::cin >> num;
            std::cout << "Input the element(s): " << std::endl;
            for (int i = 0; i < num; i++) {
                std::cin >> n;
                q.EnQueue(n);
            }
        }

        else if (k == 2) {
            std::cout
                << "Input the number of the elements you want to delete : ";
            std::cin >> n;
            for (int i = 0; i < n; i++) {
                q.DelQueue(e);
            }

        }

        else if (k == 3)
            q.Show();

        else {
            std::cout << "Input is invalid,break!" << std::endl;
            break;
        }
    }
}