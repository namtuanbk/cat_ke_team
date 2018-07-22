#include <CkSpider.h>
#include <iostream>
void ChilkatSample(void)
{
    CkSpider spider;

    spider.Initialize("www.chilkatsoft.com");

    const char *robotsText = 0;
    robotsText = spider.fetchRobotsText();

    std::cout << robotsText << "\r\n";

}

int main(int argc, char **argv)
{
	ChilkatSample();
}