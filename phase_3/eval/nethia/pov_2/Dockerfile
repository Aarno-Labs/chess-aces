#FROM registry.mlb.cromulence.com/chess/cs_base/phase_2:2021_06_02
#FROM chessexternal.apogee-research.com:5010/apogee_ta5/testbed_release/cs_base_phase_2:2021_06_02
FROM python:3.12

RUN apt-get update
RUN apt-get install -y python3 python3-pip 
RUN pip3 install requests pwn

RUN mkdir /nethia-pov-2
COPY . /nethia-pov-2
WORKDIR /nethia-pov-2
CMD ["python3", "./nethia.pov.2.py"]
