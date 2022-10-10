def make_readable(seconds):
    readable = []
    readable.append(str(seconds // 3600).zfill(2))
    readable.append(str((seconds % 3600) // 60).zfill(2))
    readable.append(str((seconds % 3600) % 60).zfill(2))
    return ':'.join(readable)

print(make_readable(0))
print(make_readable(5))
print(make_readable(60))
print(make_readable(86399))
print(make_readable(359999))