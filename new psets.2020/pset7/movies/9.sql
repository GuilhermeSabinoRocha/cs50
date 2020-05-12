select count (distinct name) from movies join stars on movie_id = stars.movie_id join people on
stars. person_id = people.id where year = 2004 order by birth;