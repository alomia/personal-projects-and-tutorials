#!/usr/bin/python3
# create information about music albums by means of a function


def make_album(artist_name, album_title, number_songs = None):
        """stores information about an album in a dictionary and returns that information to the dictionary."""
        music_album = {'artist' : artist_name, 'title' : album_title}
        if number_songs:
                music_album['songs'] = number_songs
        return music_album

sour = make_album('Olivia Rodrigo', 'SOUR')
justice = make_album('Justin Bieber', 'Justice')
afterH = make_album('The Weeknd', 'After Hours')
eutdm = make_album('Bad Bunny', 'El Ultimo Tour del mundo', 13)

print(sour)
print(justice)
print(afterH)
print(eutdm)
