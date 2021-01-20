// IO流
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;


//使用文件IO流用二进制方式演示读写配置文件
struct ServerInfo
{
    char _ip[32];   //ip
    int _port;      //端口
};

struct ConfigManager
{
public:
    explicit ConfigManager(const char *configfile = "bitsrver.config")
            : _configfile(configfile)
    {
    }

    void WriteBin(const ServerInfo &info)
    {
        //使用二进制方式打开写
        ofstream ofs(_configfile, ofstream::in | ofstream::binary);
        ofs.write((const char *) &info, sizeof(ServerInfo));
        ofs.close();
    }

    void ReadBin(ServerInfo &info)
    {
        //使用二进制方式打开读
        ifstream ifs(_configfile, ifstream::out | ifstream::binary);
        ifs.read((char *) &info, sizeof(ServerInfo));
        ifs.close();
    }

    void WriteText(const ServerInfo &info)
    {
        //C++用IO流写整型比C语言简单
        ofstream ofs(_configfile);
        ofs << info._ip << endl;
        ofs << info._port << endl;
        ofs.close();
    }

    void ReadText(ServerInfo &info)
    {
        ifstream ifs(_configfile);
        ifs >> info._ip;
        ifs >> info._port;
        ifs.close();
    }


private:
    string _configfile; //配置文件
};

int main1()
{
    ConfigManager cfgMgr;

    ServerInfo wtinfo;
    ServerInfo rdinfo;
    strcpy(wtinfo._ip, "127.0.0.1");
    wtinfo._port = 80;

    //二进制读写
    cfgMgr.WriteBin(wtinfo);
    cfgMgr.ReadBin(rdinfo);
    cout << rdinfo._ip << endl;
    cout << rdinfo._port << endl;

    //文本读写
    cfgMgr.WriteText(wtinfo);
    cfgMgr.ReadText(rdinfo);
    cout << rdinfo._ip << endl;
    cout << rdinfo._port << endl;
    return 0;
}

//转换为字符串
int main()
{
    int a = 1234567;

    stringstream ss;
    ss << a;

    string str = "";
    ss >> str;

    cout << a << endl;
    cout << str << endl;

    //在进行下一次转换之前需要进行清空，否则会转换失败
    //只是清空状态，不会清空内部管理的string对象
    //string对象会累加
    ss.clear();
    double d = 3.14;
    ss << d;
    ss >> str;
    cout << d << endl;
    cout << str << endl;
    cout << ss.str() << endl;
    return EXIT_SUCCESS;
}