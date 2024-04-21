'''Update the parser and build the WASM files
The emscripten SDK must be activated: `emsdk activate latest`,
or else the Docker daemon must be running.
Run from project directory: `python script/build.py`'''

import subprocess
import pathlib
import os

root_dir = pathlib.Path.cwd()
script_dir =  root_dir / 'script'

os.chdir(script_dir)
subprocess.run(['python','opcode_processor.py']).check_returncode()
os.chdir(root_dir)
subprocess.run('npx tree-sitter generate', shell=True).check_returncode()
subprocess.run('npx tree-sitter test', shell=True).check_returncode()
subprocess.run('npx tree-sitter build --wasm .', shell=True).check_returncode()
