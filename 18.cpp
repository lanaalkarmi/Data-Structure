#include <iostream>
#include <unordered_map>
using namespace std;

//تطبيقات ال hash  table 
// 1. unordered map
// 2. unordered set
// o(1) 
// و هدول ما بكونوا مرتبين 
// 
// 
// اذا كان السؤال تكرار بس ما بيهتم بالترتيب بستخدم هدول
// 
// 
// =======================================================
// map , set تطبيقات binary search tree log(n) 
//
//اذا كان السؤال تكرار و بيهتم بالترتيب بستخدم هدول 
//
//
//





int main()
{
    

    unordered_map<int, string > m;
    // الطريقة الاولى للاضافة نفس الشي بالماب
    m[1] = "lana"; // الرقم هو key و اللي بعد اليساوي هي value

    // الطريقة التانية للاضافة
    pair<int, string >p1 = { 1,"lolo" };
    m.insert(p1);

    // الطريقة التالتة للاضافة 
    m.insert({ 1,"l" });


    // هون ما بنتعامل مع الانديكس متل الفيكتور لهيك الطباعة طريقتين يا iterator || auto 

    for (auto i : m) {
        // i بتاشر ع pair كامل ف بعاملها معاملة الاوبجيكت 
        cout << i.first << " " << i.second;
    }

    unordered_map<int, string >age;
    age.insert({ 1,"l" });
    age.insert({ 21,"la" });
    age.insert({ 11,"sl" });


    auto it = age.find(2);
    if (it != age.end()) {
        cout << " found " << endl;
    }
    else {
        cout << " not found";
    }
    // كمان طريقة لادور ع العنصر
    if (age.count(1) > 0) {
        cout << " 1";
    }

    age.erase(7);
    cout << age.size();





}
