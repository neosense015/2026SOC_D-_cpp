// D004.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<string>

class Video {
//封装
private:
    std::string title_;
    std::string author_;
    int views_;
    int likes_;
public:
    //初始化
    Video(const std::string& title, const std::string& author, int views, int likes)
        :title_(title), author_(author), views_(views), likes_(likes) {

    }
    //公开访问
    const std::string& title() const {
        return title_;
    }
    const std::string& author() const {
        return author_;
    }
    const int views() const {
        return views_;
    }
    const int likes() const {
        return likes_;
    }
    //定义新方法：新点赞_修改likes_
    void newlikes(){
        likes_ ++;
    }
};
int main() {
    //空变量
    std::string yourtitle = "标题";
    std::string yourname = "作者";
    int yourviews = 0;
    int yourlikes = 0;
    //输入
    std::cin >> yourtitle >> yourname >> yourviews >> yourlikes;
    //封装
    Video yourvideo(yourtitle, yourname, yourviews, yourlikes);
    //访问（公开）
    std::cout << "视频标题：" << yourvideo.title() << std::endl;
    std::cout<<"UP主：" << yourvideo.author() << std::endl;
    std::cout<<"播放量：" << yourvideo.views()<< std::endl;
    std::cout << "点赞数：" << yourvideo.likes() << std::endl;
    //操作：新点赞
    yourvideo.newlikes();
    std::cout << "点赞成功！" << std::endl;
    std::cout << "点赞数：" << yourvideo.likes() << std::endl;
    return 0;
    }
 

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件