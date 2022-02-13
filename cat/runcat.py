import pathlib
import subprocess
import sys

if __name__ == "__main__":
    full_path = pathlib.Path(__file__)
    cat = "cat.exe" if sys.platform == "win32" else "cat"
    cat = full_path.parent / cat
    print(f"Running {cat.name}")
    subprocess.run(cat)
