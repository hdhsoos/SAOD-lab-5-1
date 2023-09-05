#include "5-1.h"
#include "5-1.cpp"
using namespace std;

int main() {
	// srand(time(0));
	setlocale(LC_ALL, "rus");
	menu();
	return 0;
}

void menu() {
	int command{}, n{}, choice{};
	TreeNode* root{};
	while (true) {
		cout << "Введите нужную вам команду:" << endl;
		cout << "1 - Добавить новый элемент в дерево" << endl;
		cout << "2 - Построчный вывод дерева на основе процедуры обхода в прямом порядке" << endl;
		cout << "3 - Построчный вывод дерева на основе процедуры обхода в симметричном порядке" << endl;
		cout << "4 - Построчный вывод дерева на основе процедуры обхода в обратно-симметричном порядке" << endl;
		cout << "5 - Создать дерево из случайных элементов" << endl;
		cout << "6 - Очистить дерево" << endl;
		cout << "7 - Вывести элементы дерева по возрастанию с их количеством" << endl;
		cout << "8 - Удалить элемент дерева" << endl;
		cout << "0 - Завершить программу" << endl;
		cin >> command;
		switch (command) {
		case 0:
			if (root != nullptr) {
				destroy(root);
				root = nullptr;
			}
			return;
			break;
		case 1:
			cout << "Введите информационную часть нового элемента:" << endl;
			cin >> n;
			cout << "0 - вставить рекурсивно\n1 - вставить итеративно" << endl;
			cin >> choice;
			if (choice == 0) {
				iter_add_node(root, n);
			}
			else {
				rec_add_node(root, n);
			}
			//cout << "\n";
			break;
		case 2:
			in_order(root, 0);
			break;
		case 3:
			pre_order(root, 0);
			break;
		case 4:
			post_order(root, 0);
			break;
		case 5:
			cout << "Введите количество элементов" << endl;
			cin >> n;
			build_tree(root, n);
			break;
		case 6:
			destroy(root);
			root = nullptr;
			break;
		case 7:
			pre_order_count(root);
			cout << "\n";
			break;
		case 8:
			cout << "Введите ключ удаляемого элемента:" << endl;
			cin >> n;
			if (root != nullptr) {
				remove(root, n);
			}
			break;
		default:
			cout << "Ошибка ввода. Попробуйте снова." << endl;
			break;
		}
		cout << endl;
	}

}
