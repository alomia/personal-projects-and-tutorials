#!/usr/bin/python3
# create information about music albums by means of a function


def make_album(artist_name, album_title, number_songs = None):
        """stores information about an album in a dictionary and returns that information to the dictionary."""
        music_album = {'artist' : artist_name, 'title' : album_title}
        if number_songs:
                music_album['songs'] = number_songs
        return music_album

print('To not add a new album enter "q".')

while True:
        artist_name = input("\nInterpreter of the album: ")
        if artist_name == 'q':
                break
        album_title = input("Album title: ")
        if album_title == 'q':
                break
        album = make_album(artist_name, album_title)

        print(album)
