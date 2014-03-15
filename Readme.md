> Third task of Programming II, [G4011109](http://www.usc.es/es/centros/etse/materia.html?materia=74822&ano=64)	<br/> Computer
Engineering, Santiago de Compostela



## Objectives

This task is aimed to learn how the 'abstract types' works, specific the `queue` and the `list` abstract types.

### Problem description

The Santiago's airport has serveral landstrips, When a plane requests land in the airport, the staff traffic controllers writes down the unique flight identifier to a airflow control system.

### Project specifications

- The plane code is consisted of 5 integer digits.
- The landing list must to be managed with a `list`abstract type.
- The waiting queue must to be managed with the `queue` abstract type.

### Software description

The software will display a menu with the following options:

__Landing request:__ In this option the user will insert the plane code and will be writed down in the landing list or the waiting queue, depending if there is disponibility in the airstrip.

__Land plane:__ The airport staff will write down the code of the plane that just arrived, will search in the landing list and will delete it in the list with the granted planes to land.

__Exit:__ The software will ask confirmation to the user.


### Flow diagram

![](https://googledrive.com/host/0B62SZ3WRM2R2ODhVaGxWQ21lWGM)


### Run the project


`git clone https://github.com/saulmm/Airport-management`<br/>
`cd Airport-management/dist/Debug/GNU-MacOSX/`<br/>
`chmod +x practica_3_aeropuerto`<br/>
`./practica_3_aeropuerto`

```
════════════════════════════════════════════════
                                           4eec
                                              888L
   MAIN MENU                                   888b
                                                ^8888.
   1) Insert a new land Request                 '8888c
   2) Land a plane                                88888L
                                   .8b             :8888b
   4) View current landing list    *8b             888888
                                    =88888888888888888888888888888a
                                    488------------888888--------a
   3) Exit                         .88             488888
                                    .             .88888
                                                  8888P
                                                 d888F
                                                J888
                                               4888
                                              ,88P
════════════════════════════════════════════════
```
