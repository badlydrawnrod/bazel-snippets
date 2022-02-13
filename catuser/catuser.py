# This is actually much the same as "runcat.py", but the idea is that it is using "cat" from a Bazel different package.

import pathlib
import subprocess
import sys

# What I'm trying to work out here is how we know where "cat.exe" is ... and our runfiles in general.
if __name__ == "__main__":
    my_dir = pathlib.Path(__file__).parent
    exe_name = "cat.exe" if sys.platform == "win32" else "cat"

    # We're in the "cat" directory, so we need to go up and over to find "cat".
    exe_path = my_dir.with_name("cat")
    cat = exe_path / exe_name

    print(f"Running {cat.name} from {exe_path}", flush=True)
    subprocess.run(cat)
    print(f"Done.")
