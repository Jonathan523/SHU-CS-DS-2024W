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
#ifdef DS_DEBUG
        std::cout << '\n';
        std::cout << "1.Enter the queue" << '\n';
        std::cout << "2.Delete the elements" << '\n';
        std::cout << "3.Show the queue" << '\n';
        std::cout << '\n';

        std::cout << "Choose 1 / 2 / 3 / 0(To Esc): ";
#endif
        std::cin >> k;
        if (k == 0) {
            break;

        } else if (k == 1) {
#ifdef DS_DEBUG
            std::cout << "Input the number of the elements you want to enter: ";
#endif
            std::cin >> num;
#ifdef DS_DEBUG
            std::cout << "Input the element(s): " << '\n';
#endif
            for (int i = 0; i < num; i++) {
                std::cin >> n;
                q.EnQueue(n);
            }
        }

        else if (k == 2) {
#ifdef DS_DEBUG
            std::cout
                << "Input the number of the elements you want to delete : ";
#endif
            std::cin >> n;
            for (int i = 0; i < n; i++) {
                q.DelQueue(e);
            }

        }

        else if (k == 3) {
            q.Show();

        } else {
            std::cout << "Input is invalid, break!" << '\n';
            break;
        }
    }
}