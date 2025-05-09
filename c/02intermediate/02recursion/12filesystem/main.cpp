void traverseDirectory(const string& path) {
    for (const auto& entry : filesystem::directory_iterator(path)) {
        cout << entry.path() << endl;

        if (entry.is_directory()) {
            traverseDirectory(entry.path());
        }
    }
}
