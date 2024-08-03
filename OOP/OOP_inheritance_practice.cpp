#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel {
	string channelName;
	string onwerName;
	int subCount;
	list<string> publishVideo;

public:
	YouTubeChannel(string channelName, string onwerName);
	void getInfor();
	void subscribe();
	void unsubscribe();
	void publishVideos(string title);
};

class CookingYouTubeChannel :public YouTubeChannel {
public:
	CookingYouTubeChannel(string channelName, string onwerName) :YouTubeChannel(channelName, onwerName) {

	}
};


int main()
{
	CookingYouTubeChannel channel1("Jin's cooking", "JingJing Ling");
	channel1.publishVideos("Seafood Soup");
	channel1.publishVideos("Mushroom Porege");
	channel1.getInfor();




}
YouTubeChannel::YouTubeChannel(string channelName, string onwerName)
{
	this->channelName = channelName;
	this->onwerName = onwerName;
	subCount = 0;
}
void YouTubeChannel::getInfor()
{
	cout << "Channel name:" << channelName << endl;
	cout << "Inwer name:" << onwerName << endl;
	cout << "Subscriber count:" << subCount << endl;
	cout << "Videos:" << endl;
	for (string videoTitle : publishVideo) {
		cout << videoTitle << endl;
	}
}
void YouTubeChannel::subscribe()
{
	subCount++;
}
void YouTubeChannel::unsubscribe()
{
	if (subCount > 0)
		subCount--;
}
void YouTubeChannel::publishVideos(string title)
{
	publishVideo.push_back(title);
}
