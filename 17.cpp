#include <iostream>
#include <map>
using namespace std;
// map ==> تطبيق ع البايناري يبرش تري و مدامها تطبيق عليها اذن هي عبارة عن كونتينر و التايم كومبليكستي فيها بكون logn
//و بما انها تكبيق عليها بتطبق avl tree
// كل ماب هي عبارة عن pair
// كل زوج بحتوي على key , value 
// اول مكان بحتوي ع key و التاني فاليو
// الkey ممنوع تتكرررررررر
// اما الفاليو لو تكررت عادي 
// و بما انها تطبيق عالبايناري سيرش اذا عالياسر كلو اقل من الروت و لما بقارت باقرن ع اساس الkey للانو الفاليو ممكن تتكرر
// key --> first ( مسمى تاني (
//value-->second
//
//
//







int main()
{
	map<int, int> m;
	// عشان اعمل اضافة عالماب عندي كذا طريقة
	pair <int,int>p1 = { 5,10 };
	m.insert(p1);
	pair<int, int> p2 = { 2,4 };
	m.insert(p2);
	m[10] = 8;

	map<int, int>::iterator it=m.begin();
	for (; it != m.end(); it++) {
		cout << it->first <<it->second<< " ";
	}
	for (auto i : m) {
		cout << i->first << " ";
	}

	cout<<m.empty();
	cout << m.size();
	cout << m.count(6);//بعد عاساس الkey
	auto it = m.begin();
	m.clear();
	// erase specific element
	m.erase(2);// بتمسح حسب ال key لما يكون موجود بتمسح التنين key& value


}

