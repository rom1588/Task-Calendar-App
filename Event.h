#include <iostream>
#include <string>
#include <chrono>

class Event {
    private:
        int id; // イベントID
        std::string title; // イベントタイトル
        std::string description; // 詳細
        std::chrono::system_clock::time_point eventDateTime; // イベント日時
        std::string location; // 場所
    
    public:
};