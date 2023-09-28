-- Create a table to store information about C++ tutorial folders
CREATE TABLE CppTutorialFolders (
    id INTEGER PRIMARY KEY,
    folder_name TEXT,
    commit_hash TEXT,
    last_commit_time DATETIME
);

-- Insert records for each tutorial folder
INSERT INTO CppTutorialFolders (folder_name, commit_hash, last_commit_time)
VALUES
    ('Chapter-1 Introduction', 'e8631e5', '2023-09-28 10:00:00'),
    ('Chapter-2 Basics', 'abcd123', '2023-09-28 10:05:00'),
    ('Chapter-3 Functions', 'def456', '2023-09-28 10:10:00'),
    ('Chapter-4 Program Flow Control', 'ghi789', '2023-09-28 10:15:00'),
    ('Chapter-5 More About C++ Data', 'jkl012', '2023-09-28 10:20:00'),
    ('O.O.P', 'mno345', '2023-09-28 10:25:00'),
    ('Projects', 'pqr678', '2023-09-28 10:30:00');
