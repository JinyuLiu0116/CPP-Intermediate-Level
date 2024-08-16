#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Game {
	string teamA, teamB;
	int MaxPlayers, MaxSubs, scoreA, scoreB, subA, subB;
public:
	Game() :teamA("N/A"), teamB("N/A"), MaxPlayers(1), MaxSubs(0), scoreA(0), scoreB(0), subA(0), subB(0){}
	Game(string teamA, string teamB, int MaxP, int MaxS);
	string getTeamA() { return this->teamA; }
	string getTeamB() { return this->teamB; }
	int getMaxPlayers() { return this->MaxPlayers; }
	int getMaxSubs() { return this->MaxSubs; }
	int getScoreA() { return this->scoreA; }
	int getScoreB() { return this->scoreB; }
	int getSubA() { return this->scoreA; }
	int getSubB() { return this->scoreB; }
	void setTeamA(string a) { this->teamA = a; }
	void setTeamB(string b) { this->teamB = b; }
	void setMaxPlayer(int a);
	void setMaxSubs(int a);

	virtual void setScoreA(int a)=0;
	virtual void setScoreB(int b)=0;
	virtual void setSubA(int a)=0;
	virtual void setSubB(int b)=0;

	string toString();
	

};
class SoccerGame : public Game {
	string referee;
public:
	SoccerGame() :Game() { this->referee = "N/A"; }
	SoccerGame(string teamA, string teamB, int MaxP, int MaxS, string referee, )
		:Game(teamA, teamB, MaxP, MaxS) {
		this->referee = referee;
	}
	void setScoreA(int a) override=0;
	void setScoreB(int b) override=0;
	void setSubA(int a) override=0;
	void setSubB(int b) override=0;
};
/*

*/

int main() {

}
Game::Game(string teamA, string teamB, int MaxP, int MaxS){
	this->setTeamA(teamA);
	this->setTeamB(teamB);
	this->setMaxPlayer(MaxP);
	this->setMaxSubs(MaxS);
	this->scoreA = this->scoreB = this->subA = this->subB = 0;

}
void Game::setMaxPlayer(int a) {
	if (a <= 0) {
		throw invalid_argument("Max Player cannot less than one.");
	}
	else {
		this->MaxPlayers = a;
	}
}
void Game::setMaxSubs(int a) {
	if (a < 0) {
		throw invalid_argument("Cannot have negative number of sub.");
	}
	else {
		this->MaxSubs = a;
	}
}
string Game::toString() {
	stringstream ss;
	ss << "Game{team A: " << this->getTeamA()
		<< ", team B: " << this->getTeamB()
		<< ", max players: " << this->getMaxPlayers()
		<< ", max subs: " << this->getMaxSubs()
		<< ", score A: " << this->getScoreA()
		<< ", score B: " << this->getScoreB()
		<< ", sub A: " << this->getSubA()
		<< ", sub B: " << this->getScoreB()<<"}";
	return ss.str();
}

void SoccerGame::setScoreA(int a) {

}
void SoccerGame::setScoreB(int b) {

}
void SoccerGame::setSubA(int a) {

}
void SoccerGame::setSubB(int b) {

}
