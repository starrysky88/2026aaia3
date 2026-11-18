//week11-1.cpp 學習計畫 Linked List 第1題
//LeetCode 21. Merge Two Sorted Lists
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        /*ListNode* now = list1;//怎麼把Linked List裡的數字都走一次
        while(now != nullptr){//只要now還有東西
            cout << now->val << " ";//把now的內容now->印出來
            now = now ->next;//Linked List指到下一筆
        }
        ListNode* ans = new ListNode(999);//題目要ListNode* 我們就宣告他放999
        return ans;*/
        ListNode * ans = new ListNode(999);
        ListNode * now = ans;
        while(list1 != nullptr || list2 != nullptr){
            if(list1 == nullptr){//左邊沒了
                now->next = list2;//接右邊
                break;
            }else if(list2==nullptr){//右邊沒了
                now->next = list1;//接左邊
                break;
            }else{//兩邊都還有，要比大小，小的放now裡面
                if(list1->val < list2->val){
                    now->next = new ListNode(list1->val);
                    now = now->next;
                    list1 = list1->next;
                }else{//否則就是右邊小，放右邊
                    now->next = new ListNode(list2->val);
                    now = now->next;
                    list2 = list2->next;
                }
            }
        }
        return ans->next;
    }
};
