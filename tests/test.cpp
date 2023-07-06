#include <iostream>
#include "gtest/gtest.h"
#include "../header/GetRecommendation.hpp"
#include "../header/MovieList.hpp"

TEST(AddMovie, TitleWithMultipleSpaces) {
    MovieList movieDatabase;

    string title = "The Assassination of Jesse James by the Coward Robert Ford";
    string score = "3";
    string tag = "Biography";
    string time = "160";

    movieDatabase.addRow({title, time, score, tag});
}

TEST(AddMovie, DoubleScore) {
    MovieList movieDatabase;

    string title = "Free Guy";
    string score = "7.5";
    string tag = "Action";
    string time = "115";
}

TEST(AddMovie, InvalidTag) {
    MovieList movieDatabase;

    string title = "Kuroko's Basketball";
    string score = "7.5";
    string tag = "Basketball";
    string time = "115";
}

TEST(AddMovie, WrittenTime) {
    MovieList movieDatabase;

    string title = "Free Guy";
    string score = "7.5";
    string tag = "Action";
    string time = "One hundred fifteen";
}

TEST(AddMovie, LargeTime) {
    MovieList movieDatabase;

    string title = "Free Guy";
    string score = "7.5";
    string tag = "Action";
    string time = "2147483648";
}

TEST(AddMovie, LargeScore) {
    MovieList movieDatabase;

    string title = "Free Guy";
    string score = "12";
    string tag = "Action";
    string time = "115";

    movieDatabase.addRow({title, time, score, tag});
}

TEST(AddMovie, NegativeScore) {
    MovieList movieDatabase;

    string title = "Free Guy";
    string score = "-1";
    string tag = "Action";
    string time = "115";

    movieDatabase.addRow({title, time, score, tag});
}

TEST(AddMovie, NegativeTime) {
    MovieList movieDatabase;

    string title = "The Assassination of Jesse James by the Coward Robert Ford";
    string score = "3";
    string tag = "Biography";
    string time = "-160";

    movieDatabase.addRow({title, time, score, tag});
}

TEST(MovieHistory, NoMovies) {
    movieDatabase.set_selection(nullptr);
    movieDatabase.PrintMovieList(cout);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
