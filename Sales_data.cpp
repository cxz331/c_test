#include <iostream>
#include <string>
#include "Sales_data.h"


int main(){
    Sales_data data1, data2;

    double price = 0;
    std::cout << "请输入商品名称, 商品个数, 商品单价" << std::endl;
    std::cin >> data1.bookNo >> data1.units_sold >> price;
    data1.revenue = data1.units_sold * price;

    std::cout << "请输入商品名称, 商品个数, 商品单价" << std::endl;
    std::cin >> data2.bookNo >> data2.units_sold >> price;
    data2.revenue = data2.units_sold * price;

    if(data1.bookNo == data2.bookNo){
        unsigned totalCnt = data1.units_sold + data2.units_sold;
        double totalRevenue = data1.revenue + data2.revenue;
        std::cout << "相同商品: " << data1.bookNo << ", 总个数: " << totalCnt << ", 总价格: " << totalRevenue << std::endl;
        if(totalCnt > 0){
            std::cout << "售出单价: " << totalRevenue / totalCnt << std::endl;
        }else{
            std::cout << "没卖出去呀老铁" << std::endl;
        }
        return 0;
    }else{
        std::cerr << "这2本书的bookNo不一致，暂不计算" << std::endl;
    }
}