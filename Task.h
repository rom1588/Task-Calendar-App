#ifndef TASK_H
#define TASK_H

#include <string>
#include <chrono>

// 日時を扱う
using time_point = std::chrono::system_clock::time_point;

class Task {
private:
    int id; // タスクID
    std::string title; // タイトル
    std::string description; // 内容
    time_point dueDate; // 期限
    bool isCompleted; // 完了フラグ

public:
    // コンストラクタ
    Task(int taskId, std::string taskTitle, time_point due);

    // デフォルトコンストラクタ（フレームワーク時に利用する）
    Task() ;

    // ゲッター
    int getId() const;
    std::string getTitle() const;
    std::string getDescription() const ;
    time_point getDueDate() const ;
    bool getIsCompleted() const ;

    // セッター
    void setDescription(const std::string& desc) ;
    void setDueDate(const time_point& due) ;
    void setCompleted(bool completed) ;
};

#endif // TASK_H