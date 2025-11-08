#include "pch.h"
#include "CppUnitTest.h"
#include "../rpcGame.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RPSGameTests
{
	TEST_CLASS(RPSGameTests)
	{
	public:
		
		TEST_METHOD(Player1Wins)
		{
			char player1[] = "rock";
			char player2[] = "scissors";
			Assert::AreEqual("Player 1", rcsGame(player1, player2));
		}
		TEST_METHOD(Draw)
		{
			char player1[] = "paper";
			char player2[] = "paper";
			Assert::AreEqual("Player 1", rcsGame(player1, player2));
		}
		TEST_METHOD(Invalid)
		{
			char player1[] = "rock";
			char player2[] = "2";
			Assert::AreEqual("Player 1", rcsGame(player1, player2));
		}
	};
}
