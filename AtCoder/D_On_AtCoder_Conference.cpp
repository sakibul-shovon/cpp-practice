#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    // ইনপুট দ্রুত করার জন্য
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll N, M, C;
    if (!(cin >> N >> M >> C)) return 0;

    // ১. ইনপুট নেওয়া এবং সর্ট করা
    // map ব্যবহার করছি কারণ map অটোমেটিক পজিশন অনুযায়ী সর্ট করে রাখে
    map<ll, ll> counts;
    for (ll i = 0; i < N; i++) {
        ll pos;
        cin >> pos;
        counts[pos]++; // একই পজিশনে কয়জন আছে তা গুনছি
    }

    // map থেকে ডাটাগুলো একটা vector-এ নিয়ে আসছি কাজের সুবিধার জন্য
    // vector এর প্রতিটা উপাদান হলো এক একটা "বাস স্টপ"
    vector<pair<ll, ll>> v;
    for (auto p : counts) {
        v.push_back(p);
    }

    ll K = v.size(); // মোট ইউনিক স্টপ সংখ্যা

    // ২. বৃত্তাকার সমস্যা সমাধানের জন্য অ্যারে দ্বিগুণ করা
    // শেষের স্টপগুলোর সাথে M যোগ করে ভেক্টরের শেষে আবার বসাচ্ছি
    // ফলে গোল রাস্তা এখন সোজা রাস্তা হয়ে গেল
    for (ll i = 0; i < K; i++) {
        v.push_back({v[i].first + M, v[i].second});
    }

    ll total_ans = 0; // চূড়ান্ত উত্তর
    ll current_people = 0; // বাসে বর্তমান মানুষ
    ll R = 0; // ডানদিকের পয়েন্টার (Right Pointer)

    // ৩. প্রতিটি স্টপের জন্য লুপ চালানো (L = Left Pointer)
    // আমরা প্রতিটি স্টপকে "শুরুর স্টপ" ধরে হিসাব করব
    for (ll L = 0; L < K; L++) {
        
        // --- গ্যাপ বের করা ---
        ll gap;
        if (L == 0) {
            // প্রথম স্টপের পেছনের গ্যাপ মানে হলো:
            // (নিজের পজিশন + পুরো পরিধি M) - (শেষ স্টপের পজিশন)
            // মানে বৃত্ত ঘুরে আসার দূরত্ব
            gap = v[0].first + M - v[K-1].first;
        } else {
            // সাধারণ গ্যাপ: বর্তমান স্টপ - আগের স্টপ
            gap = v[L].first - v[L-1].first;
        }

        // --- মানুষ খোঁজা (Sliding Window) ---
        // যতক্ষণ মানুষ C এর চেয়ে কম, ডানদিকের স্টপ থেকে মানুষ নাও
        while (R < v.size() && current_people < C) {
            current_people += v[R].second;
            R++;
        }

        // --- হিসাব করা ---
        // current_people = থামার সময় মোট মানুষ (Xi)
        // gap = পেছনের কতগুলো পয়েন্ট থেকে যাত্রা শুরু করলে এই রেজাল্ট হবে
        total_ans += (current_people * gap);

        // --- পরের লুপের প্রস্তুতি ---
        // আমরা যেহেতু L কে এক ঘর ডানে সরাব, তাই বর্তমান L স্টপের
        // মানুষগুলোকে বাস থেকে নামিয়ে দিতে হবে (বাদ দিতে হবে)
        current_people -= v[L].second;
    }

    cout << total_ans << endl;

    return 0;
}