This files contains information creating arm32 images.

# arm-build-base

The `arm-build-base` is the base image with the arm32 cross compiler.

The target `arm-build-base` in [Makefile](aarno/Makefile) will build the `arm-build-base` container.

The command is simply
```
docker build -t arm-build-base -f Dockerfile.arm.musl .
```

# Builds

| Name | Path | Vulnerabilities (CWE) |
|------|------|-----------------------|
| [brickell](#brickell) | ./phase_3/example/brickell | CWE-121 (Stack Buffer Overflow) |
| [darwin](#darwin) | ./phase_3/example/darwin | CWE-416 (Use After Free) |
| [justison](#justison) | ./phase_3/eval/justison/README.md | CWE-124 (Buffer Underflow), CWE-121 (Stack Buffer Overflow) |
| [nethia](#nethia) | ./phase_3/eval/nethia | CWE-787 (Out-of-bounds write), CWE-123 (Write-what-where) |
| [earnshaw](#earnshaw) | ./phase_2/example/earnshaw | CWE-122 (Heap Buffer Overflow) |
| [sedgewick](#sedgewick) | ./phase_2/eval/sedgewick | CWE-787 (Out-of-bounds write - stack) |
| [olmstead](#olmstead) | ./phase_2/eval/olmstead | CWE-787 (Out-of-bounds write - snprintf stack overflow) |
| [morton](#morton) | ./phase_2/eval/morton | CWE-122 (Heap Buffer Overflow) |
| [hackensack](#hackensack) | ./phase_2/eval/hackensack | CWE-121 (Stack Buffer Overflow), CWE-415 (Double Free), CWE-416 (Use After Free) |
| [pitsmoor](#pitsmoor) | ./phase_2/eval/pitsmoor | CWE-787 (Out-of-bounds write) |


## brickell

Build command
```
docker compose build
```

Server Command
```
docker compose up ta3_brickell
```

POV_2 (CWE-121 : Stack-based Buffer Overflow)

```
docker compose up ta3_brickell_pov_2
```

Poller:

```
docker compose up ta3_brickell_poller
```


## justison

Build command
```
docker compose build
```

Server Command
```
docker compose up ta3_justison
```

POV_1 (CWE-121: Stack-based Buffer Overflow)
```
docker compose up ta3_justison_pov_1
```

POV_2 (CWE-126: Buffer Over-read)

```
docker compose up ta3_justison_pov_2
```

Poller 
```
docker compose up ta3_justison_poller
```

# nethia
Build command
```
docker compose build
```

Server
```
docker compose up ta3_nethia
```

POV_1 (CWE-170:Improper NULL termination, CWE-200: Exposure of Sensitive Information to an Unauthorized Actor)

```
docker compose up ta3_nethia_pov_1
```

POV_2 (CWE-126: Buffer Over-read)
```
docker compose up ta3_nethia_pov_2
```

Poller command

```
docker compose up ta3_nethia_poller
```

# hackensack
Build command
```
docker compose build
```

Server
```
docker compose up ta3_nethia
```

POV_2 CWE-121 Stack-based buffer overflow

```
docker compose up ta3_hackensack_pov_2
```

POV_3 (CWE-415 Double free, CWE-416 Use after free)
```
docker compose up ta3_hackensack_pov_2
```

Poller command

```
docker compose up ta3_hackensack_poller
```


# pitsmoor
Build command
```
docker compose build
```

Server
```
docker compose up ta3_pitsmoor
```

POV_1 CWE-787 Out-of-bounds write

```
docker compose up ta3_pitsmoor_pov_1
```

Poller command

```
docker compose up ta3_pitsmoor_poller
```
