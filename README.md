# Movie Database
 
 > Authors: [David Liu](https://github.com/TimmyTwoD), [Diogo Garcia](https://github.com/DiogoAG), [Taneesha Sharma](https://github.com/taneesha7), [Valerie Wong](https://github.com/vwong031)

## Project Description
### The Idea
> * As we progress further into the Information Age, where technology and social media is prominent, people and movie lovers may need a database to easily find movies, as well as input stats to share with others. 
> * The user will input a movie with the following attributes: name, time, score, relevant tags (from a set a list). The output would be stats such as total time watched, average score among movies with a certain tags, and maybe a recommendation system that recommends other movies in the database that fulfill a score and tag criteria.

### How We Will Accomplish This
> * Languages / Tools / Libraries / Technologies:
>    * [C++ Language](https://en.cppreference.com/w/cpp/11) - the second major version of the C++ programming language

 >    Design Pattern 1: Builder
 >    * We picked Builder because we decided to break down the construction of the complex movieList object and recommendation object. Builder lets us construct the parts of the objects one by one making the code easier to read and edit. A problem that may arise is users may not have an attribute of the movieList or recommendation ready. With the builder class, we can still construct the object with the missing attributes displayed with default values in the movie list. 
 
>    Design Pattern 2: Strategy
>    * We picked Strategy as our design pattern because we had different functions for each object of the movie class. The strategy design pattern will help us organize the code better. A problem we anticipate is that if a function gets too complex, we won't know the part responsible for the bugs. Separating it through the strategy design will divide the functions as we need it.  

## Class Diagram
### Strategy Design Pattern
 > ![Screenshot (9)](https://user-images.githubusercontent.com/74090811/131026228-e31f1d44-0c61-44d8-9bd0-ffaee7e8e24a.png)
 > Strategy section: In our project, we will be creating a virtual Select base class and virtual Select_Column class that inherits from the base class. We will then create four other Selection classes to follow the strategy design pattern. This is relevant for the printing/listing movies portion of the database, in which users can specify certain movie requirements they would like before the database makes recommendations. 
 ### Builder Design Pattern
>![Builder Design Pattern](https://user-images.githubusercontent.com/86642824/131211330-ca1b5f87-9945-4c69-8194-069cb68f0a75.png)
>![Recommendation Builder Design Pattern](https://user-images.githubusercontent.com/86642824/131211588-b495b896-c06d-414b-9664-48fc6d6ef515.png)
> Builder section: The main object will be a movieList with its attributes divided into steps. Time, tag, score, and movie title would be the componenets of the movieList object. The user would be able to enter the attributes one by one customizing each movie object. After adding anything, the user should be able to go back and edit the attributes of any movieList object. (ie the user wants to give a higher score to a movie) In addition, the recommendation object can be built with tag, time, and score. This differs a little bit from movieList because you can build the recommendation with multiple tags.
 
 ## Screenshots
 > * Running and Quitting Program
 > ![Screenshot (19)](https://user-images.githubusercontent.com/74090811/131280222-77b223b4-b0f2-4271-b223-f66c6f0aa596.png)
 > * Printing History of Database
 > ![Screenshot (21)](https://user-images.githubusercontent.com/74090811/131280261-d07a8f7b-c0dd-499c-9e4d-029fe01e0ab3.png)
 > * Adding Movie to Database
 > ![Screenshot (20)](https://user-images.githubusercontent.com/74090811/131280250-77b79774-fe62-4774-b796-e2be44c6b88f.png)
 > * Getting Recommendation Based off Tag
 > ![Screenshot (22)](https://user-images.githubusercontent.com/74090811/131280275-a9c4aac8-e216-45ec-a3b8-f3895bf180e1.png)
 > * Getting Recommendation Based off Score
 > ![Screenshot (23)](https://user-images.githubusercontent.com/74090811/131280292-82b5063a-8bd9-44d7-be4d-d35fb652544f.png)
 > * Getting Recommendation Based off Time
 > ![Screenshot (24)](https://user-images.githubusercontent.com/74090811/131280310-7a2a2654-6bdc-40ca-b4a5-1d50f715b2ff.png)
 > * Seeing Stats of a Specific Movie
 > ![Screenshot (25)](https://user-images.githubusercontent.com/74090811/131280320-3360bf68-859c-4d71-8d97-7e9b2da3149d.png)
 > * Deleting a Movie From the Database
 > ![Screenshot (26)](https://user-images.githubusercontent.com/74090811/131280336-06296312-8593-4ff3-8985-b9ec6bd76ee3.png)
 > * Editing Movie Time 
 > ![Screenshot (27)](https://user-images.githubusercontent.com/74090811/131280351-faaf138b-5c3d-4abb-94b5-2ce469828369.png)
 
 ## Installation/Usage
 > * Clone the repository on a local machine using Git Bash
 > * Run movie.exe
 
 ## Testing
 > * Valgrind Memcheck: Tested for memory leaks
 > * CI: Testing automated on any push or pulls to the main branch using GitHub Actions
 
