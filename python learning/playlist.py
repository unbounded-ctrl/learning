import os
import re
from googleapiclient.discovery import build

# Function to scan local songs
def scan_local_songs(directory):
    local_songs = []
    for root, dirs, files in os.walk(directory):
        for file in files:
            if file.endswith(('.mp3', '.wav', '.flac', '.aac')):
                local_songs.append(file.lower())
    return local_songs

# Function to fetch YouTube playlist songs
def fetch_youtube_playlist(api_key, playlist_id):
    youtube = build('youtube', 'v3', developerKey=api_key)
    request = youtube.playlistItems().list(
        part='snippet',
        playlistId=playlist_id,
        maxResults=50
    )
    response = request.execute()

    youtube_songs = []
    for item in response['items']:
        title = item['snippet']['title']
        # Clean up the title to match local file names
        title = re.sub(r'[^\w\s]', '', title).lower()
        youtube_songs.append(title)
    return youtube_songs

# Function to create VLC playlist
def create_vlc_playlist(local_songs, directory, output_file):
    with open(output_file, 'w') as playlist:
        playlist.write("#EXTM3U\n")
        for song in local_songs:
            song_path = os.path.join(directory, song)
            playlist.write(f"{song_path}\n")
    print(f"VLC playlist created: {output_file}")

# Main function
def main():
    # Directory containing your local songs
    local_directory = C:\Users\Administrator\Desktop\music

    # YouTube API key and playlist ID
    api_key = "YOUR_YOUTUBE_API_KEY"
    playlist_id = "YOUR_YOUTUBE_PLAYLIST_ID"

    # Scan local songs
    local_songs = scan_local_songs(local_directory)

    # Fetch YouTube playlist songs
    youtube_songs = fetch_youtube_playlist(api_key, playlist_id)

    # Compare and find matching songs
    matching_songs = []
    for song in local_songs:
        song_name = re.sub(r'[^\w\s]', '', song).lower()
        if any(youtube_song in song_name for youtube_song in youtube_songs):
            matching_songs.append(song)

    # Create VLC playlist
    create_vlc_playlist(matching_songs, local_directory, "vlc_playlist.m3u")

if __name__ == "__main__":
    main()