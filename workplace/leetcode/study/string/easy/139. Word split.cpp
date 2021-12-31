// #include <iostream>
// #include <vector>
// #include <string>
// #include <unordered_map>
// using namespace std;

// bool wordBreak(string s, vector<string> &wordDict)
// {

//     if (wordDict.size() == 1)
//         return s == wordDict[0];
//     unordered_map<string, int> words_map;
//     for (auto word : wordDict)
//     {
//         words_map[word] = 1;
//     }

//     string word = "";

//     int i = 0, j = 0;

//     while (j < s.size())
//     {
//         word += s[j];
//         cout << word << endl;
//         if (words_map.count(word))
//         {
//             i = j;
//             if (j + 1 < s.size())
//             {
//                 if (!words_map.count(word + s[j + 1]))
//                     word = "";
//             }
//             else
//                 word = "";
//         }
//         j++;
//     }
//     if (i == s.size() - 1)
//         return true;
//     else
//         return false;
// }

// int main()
// {

//     string str = "aaaaaaa";
//     vector<string> vWords{"aaaa", "aaa"};

//     bool result = wordBreak(str, vWords);
//     cout << result << endl;
//     return 0;
// }
