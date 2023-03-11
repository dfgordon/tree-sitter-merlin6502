'''Update the parser and build the WASM files
The Docker daemon must be running.
Rootless mode: `systemctl --user start docker.service`
Run from script directory.'''

import subprocess
import pathlib
import os

script_dir = pathlib.Path.cwd()
root_dir = script_dir.parent

os.chdir(script_dir)
subprocess.run(['python','opcode_processor.py']).check_returncode()
os.chdir(root_dir)
subprocess.run(['tree-sitter','generate']).check_returncode()
subprocess.run(['tree-sitter','test']).check_returncode()
subprocess.run(['tree-sitter','build-wasm']).check_returncode()
