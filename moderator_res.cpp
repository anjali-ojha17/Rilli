#include <iostream>
#include <fstream>
using namespace std;

//string roomno[],string course[],string teacher[],string type[]









string generateHTMLWithCSS_mod(string roomno[],string course_Code[],string teacher[],string type[]) {
    
    string htmlContent = R"(
      <html>
  <head>
    <link rel="stylesheet" href="pret2.css" />
    <link rel="preconnect" href="https://fonts.googleapis.com" />
    <link rel="preconnect" href="https://fonts.gstatic.com" crossorigin />
    <link
      href="https://fonts.googleapis.com/css?family=Lato:300,400,700,900"
      rel="stylesheet"
      type="text/css"
    />

    <link
      href="https://fonts.googleapis.com/css2?family=Montserrat:wght@900&family=Rubik:wght@300;400&display=swap"
      rel="stylesheet"
    />
    <link
      rel="stylesheet"
      href="https://fonts.googleapis.com/css2?family=Material+Symbols+Outlined:opsz,wght,FILL,GRAD@20..48,100..700,0..1,-50..200"
    />
    <link
      href="https://unpkg.com/boxicons@2.1.4/css/boxicons.min.css"
      rel="stylesheet"
    />
    <link
      rel="stylesheet"
      href="https://fonts.googleapis.com/css2?family=Material+Symbols+Outlined:opsz,wght,FILL,GRAD@20..48,100..700,0..1,-50..200"
    />
    <style>
      .material-symbols-outlined {
        font-size: 35px;
        font-variation-settings: "FILL" 1, "wght" 600, "GRAD" 200, "opsz" 98;
      }
    </style>
    <link
      rel="stylesheet"
      href="https://fonts.googleapis.com/css?family=Open+Sans:600"
    />
    <link
      rel="stylesheet"
      href="https://maxcdn.bootstrapcdn.com/font-awesome/4.6.3/css/font-awesome.min.css"
    />
  </head>
  <body onload="pageLoad() ">
    <style type="text/css"></style>

    <div id="mydiv">
      <div class="conCon">
        <div class="tt">
          <button class="item-5" id="changeZIndexButton2"></button>
        </div>
        <form action="/rilli_mod_dev" method="post">
          <div class="tName fle">
            <div class="input-box">
              <input
                type="text"
                class="input"
                id="username"
                placeholder=""
                required
                name="Teacher_Name"
              />
              <label for="username">Teacher Name</label>
            </div>
          </div>
          <div class="sSubject fle">
            <div class="input-box">
              <input
                type="text"
                class="input"
                id="password"
                placeholder="Subject"
                required
                name="course_code"
              />
              <label for="p">Subject</label>
            </div>
          </div>
          <div class="roomC fle">
            <div class="input-box">
              <input
                type="text"
                class="input"
                id="password"
                placeholder="Subject"
                name="class_name" 
                required
                
              />
              <label for="p">Room Code</label>
            </div>
          </div>
          <div class="dayI fle">
            <div class="wrapper-dropdown" id="dropdown">
              <input class="selected-display" id="destination" name="day" readonly></input>
              <svg
                class="arrow"
                id="drp-arrow"
                width="24"
                height="24"
                viewBox="0 0 24 24"
                fill="none"
                xmlns="http://www.w3.org/2000/svg"
                class="transition-all ml-auto rotate-180"
              >
                <path
                  d="M7 14.5l5-5 5 5"
                  stroke="currentColor"
                  stroke-width="1.5"
                  stroke-linecap="round"
                  stroke-linejoin="round"
                ></path>
              </svg>
              <ul class="dropdown">
                <li class="item">Monday</li>
                <li class="item">Tuesday</li>
                <li class="item">Wednesday</li>
                <li class="item">Thursday</li>
                <li class="item">Friday</li>
              </ul>
            </div>
          </div>
          <div class="rangeT fle">
            <input type="time" id="time1" name="time1" />
            <span>------</span>
            <input type="time" id="time2" name="time2" />
          </div>

          <div class="sub fle">
            <div class="input-box">
              <input type="submit" class="btn-submit" value="Submit" required />
              <div class="notifi"></div>
            </div>
          </div>
        </form>
      </div>
    </div>
    <div class="parent">
      <div class="navy">
        <div class="logo" id="sid">
          <img
            class="GolGol"
            src="images/logo.png"
            onclick="toggleFunction() "
          />
        </div>
        <div class="log1"><img class="DP" src="images/New_Me.png" /></div>
        <div class="log2">
          <label class="DAY" id="current-day"></label
          ><label class="NO" id="current-date"></label>
        </div>
        <div class="log3" id="Theme">
          <i class="bx bx-sun bx-md"></i>
        </div>
        <div class="log4" onclick="window.close">
          <i class="bx bx-log-out bx-md"></i>
        </div>
        <div class="bor1"></div>
        <div class="bor2"></div>
        <div class="bor3"></div>
        <div class="ril">
          <label class="rills">RILLI</label>
        </div>
      </div>
      <!-- side f -->
      
        
      <div class="Todo" id="TD">
        <form action="/rilli_mod" method="post" class="sideF"><div class="hh opa">
          <h1><span>Class List</span></h1>
        </div>
        <div class="dd opa year">
          <h2>Year</h2>
          <div class="center">
            <div class="container">
              <div class="setting-description">
                <div
                  class="setting-description-text"
                  style="margin-left: 15px"
                ></div>
              </div>
              <div class="wrapper-dropdown" id="dropdown">
                <input class="selected-display" id="destination1" name="year" readonly></input>
                <svg
                  class="arrow"
                  id="drp-arrow"
                  width="24"
                  height="24"
                  viewBox="0 0 24 24"
                  fill="none"
                  xmlns="http://www.w3.org/2000/svg"
                  class="transition-all ml-auto rotate-180"
                >
                  <path
                    d="M7 14.5l5-5 5 5"
                    stroke="currentColor"
                    stroke-width="1.5"
                    stroke-linecap="round"
                    stroke-linejoin="round"
                  ></path>
                </svg>
                <ul class="dropdown">
                  <li class="item">1st Year</li>
                  <li class="item">2nd Year</li>
                  <li class="item">3rd Year</li>
                  <li class="item">4th Year</li>
                </ul>
              </div>
              <br />
              <div class="setting-description">
                <div class="setting-description-text" style="margin-left: 15px">
                  <h10></h10>
                </div>
              </div>
            </div>
          </div>
        </div>
        
        <div class="dd opa group">
          <h2>Group</h2>
          <div class="wrapper-dropdown" id="dropdown">
            <input class="selected-display" id="destination1" name="group" readonly></input>
            <svg
              class="arrow"
              id="drp-arrow"
              width="24"
              height="24"
              viewBox="0 0 24 24"
              fill="none"
              xmlns="http://www.w3.org/2000/svg"
              class="transition-all ml-auto rotate-180"
            >
              <path
                d="M7 14.5l5-5 5 5"
                stroke="currentColor"
                stroke-width="1.5"
                stroke-linecap="round"
                stroke-linejoin="round"
              ></path>
            </svg>
            <ul class="dropdown">
              <li class="item">G4</li>
              <li class="item">G5</li>
              <li class="item">G6</li>
              <li class="item">G7</li>
            </ul>
          </div>
        </div>
        <div class="dd opa batch">
          <h2>Batch</h2>
          <div class="wrapper-dropdown" id="dropdown">
            <input class="selected-display" id="destination1" name="batch" readonly></input>
            <svg
              class="arrow"
              id="drp-arrow"
              width="24"
              height="24"
              viewBox="0 0 24 24"
              fill="none"
              xmlns="http://www.w3.org/2000/svg"
              class="transition-all ml-auto rotate-180"
            >
              <path
                d="M7 14.5l5-5 5 5"
                stroke="currentColor"
                stroke-width="1.5"
                stroke-linecap="round"
                stroke-linejoin="round"
              ></path>
            </svg>
            <ul class="dropdown">
              <li class="item">b04</li>
              <li class="item">B41</li>
              <li class="item">B42</li>
              <li class="item">B43</li>
            </ul>
          </div>
        </div>
        <div class="dd opa course">
          <h2>Course</h2>
          <div class="wrapper-dropdown" id="dropdown">
            <input class="selected-display" id="destination1" name="course" readonly></input>
            <svg
              class="arrow"
              id="drp-arrow"
              width="24"
              height="24"
              viewBox="0 0 24 24"
              fill="none"
              xmlns="http://www.w3.org/2000/svg"
              class="transition-all ml-auto rotate-180"
            >
              <path
                d="M7 14.5l5-5 5 5"
                stroke="currentColor"
                stroke-width="1.5"
                stroke-linecap="round"
                stroke-linejoin="round"
              ></path>
            </svg>
            <ul class="dropdown">
              <li class="item">CSE</li>
              <li class="item">Biotech</li>
              <li class="item">Mechanical</li>
              <li class="item">Electrical</li>
            </ul>
          </div>
        </div>
        <div class="dd opa classT">
          <h2>Class Type</h2>
          <div class="wrapper-dropdown" id="dropdown">
            <input class="selected-display" id="destination" name="type" readonly></input>
            <svg
              class="arrow"
              id="drp-arrow"
              width="24"
              height="24"
              viewBox="0 0 24 24"
              fill="none"
              xmlns="http://www.w3.org/2000/svg"
              class="transition-all ml-auto rotate-180"
            >
              <path
                d="M7 14.5l5-5 5 5"
                stroke="currentColor"
                stroke-width="1.5"
                stroke-linecap="round"
                stroke-linejoin="round"
              ></path>
            </svg>
            <ul class="dropdown">
              <li class="item">Tutorial</li>
              <li class="item">Lecture</li>
              <li class="item">Practical</li>
            </ul>
          </div>
        </div>
        <div class="opa seadiv"><button type="submit" class="search" required /><i class='bx bx-search-alt-2'></i>
        </button></div></form>
        
        
      </div>

      <div class="Main" id="main">
        <div class="calendar">
          <div class="top">
            <h3>November 2023 /</h3>
            <div class="Ass">
              <button class="button button--bestia" id="changeZIndexButton">
                <div class="button__bg"></div>
                <span>+</span>
              </button>
            </div>
          </div>

          <div class="NONE days-1">SUN</div>
          <div class="NONE days-2">MON</div>
          <div class="NONE days-3">TUE</div>
          <div class="NONE days-4">WED</div>
          <div class="NONE days-5">THU</div>
          <div class="NONE days-6">FRI</div>
          <div class="NONE days-7">SAT</div>
          <!-- Numbers -->
          <label class="NONE sun dayN"></label>
          <label class="NONE mon dayN"></label>
          <label class="NONE tue dayN"></label>
          <label class="NONE wed dayN"></label>
          <label class="NONE thu dayN"></label>
          <label class="NONE fri dayN"></label>
          <label class="NONE sat dayN"></label>
          <div class="bars">
            <div class="bars2">
            
              <!--Borders-->
              <div class="bord bord1"></div>
              <div class="bord bord2"></div>
              <div class="bord bord3"></div>
              <div class="bord bord4"></div>
              <div class="bord bord5"></div>
              <div class="bord bord6"></div>
              <div class="bord bord7"></div>
              <div class="bord bord8"></div>
              <div class="bord bord9"></div>
              <div class="bord bord10"></div>
              <div class="bord bord11"></div>

              

              <!--Timings-->
              <div class="time All">All day</div>
              <div class="time AM12">08:30</div>
              <div class="time AM1">09:30</div>
              <div class="time AM2">10:40</div>
              <div class="time AM3">11:40</div>
              <div class="time AM4">BREAK</div>
              <div class="time AM5">13:30</div>
              <div class="time AM6">14:30</div>
              <div class="time AM7">15:40</div>
              <div class="time AM8">16:40</div>
              <div class="time AM9">17:35</div>

              <!-- BOXES -->

              <div class="SLOT slot1 )"+type[0]+R"(">
                <span>)"+course_Code[0]+R"(</span>
                <span>)"+teacher[0]+R"(</span>
                <span>)"+roomno[0]+R"(</span>
              </div>

              <div class="SLOT slot2 )"+type[1]+R"(">
                <span>)"+course_Code[1]+R"(</span>
                <span>)"+teacher[1]+R"(</span>
                <span>)"+roomno[1]+R"(</span>
              </div>

              <div class="SLOT slot3 )"+type[2]+R"(">
                <span>)"+course_Code[2]+R"(</span>
                <span>)"+teacher[2]+R"(</span>
                <span>)"+roomno[2]+R"(</span>
              </div>

              <div class="SLOT slot4 )"+type[3]+R"(">
                <span>)"+course_Code[3]+R"(</span>
                <span>)"+teacher[3]+R"(</span>
                <span>)"+roomno[3]+R"(</span>
              </div>

              <div class="SLOT slot5 )"+type[4]+R"(">
                <span>)"+course_Code[4]+R"(</span>
                <span>)"+teacher[4]+R"(</span>
                <span>)"+roomno[4]+R"(</span>
              </div>

              <div class="SLOT slot6 )"+type[5]+R"(">
                <span>)"+course_Code[5]+R"(</span>
                <span>)"+teacher[5]+R"(</span>
                <span>)"+roomno[5]+R"(</span>
              </div>

              <div class="SLOT slot7 )"+type[6]+R"(">
                <span>)"+course_Code[6]+R"(</span>
                <span>)"+teacher[6]+R"(</span>
                <span>)"+roomno[6]+R"(</span>
              </div>

              <div class="SLOT slot8 )"+type[7]+R"(">
                <span>)"+course_Code[7]+R"(</span>
                <span>)"+teacher[7]+R"(</span>
                <span>)"+roomno[7]+R"(</span>
              </div>

              <div class="SLOT slot9 )"+type[8]+R"(">
                <span>)"+course_Code[8]+R"(</span>
                <span>)"+teacher[8]+R"(</span>
                <span>)"+roomno[8]+R"(</span>
              </div>

              <div class="SLOT slot10 )"+type[9]+R"(">
                <span>)"+course_Code[9]+R"(</span>
                <span>)"+teacher[9]+R"(</span>
                <span>)"+roomno[9]+R"(</span>
              </div>

              <div class="SLOT slot11 )"+type[10]+R"(">
                <span>)"+course_Code[10]+R"(</span>
                <span>)"+teacher[10]+R"(</span>
                <span>)"+roomno[10]+R"(</span>
              </div>

              <div class="SLOT slot12 )"+type[11]+R"(">
                <span>)"+course_Code[11]+R"(</span>
                <span>)"+teacher[11]+R"(</span>
                <span>)"+roomno[11]+R"(</span>
              </div>

              <div class="SLOT slot13 )"+type[12]+R"(">
                <span>)"+course_Code[12]+R"(</span>
                <span>)"+teacher[12]+R"(</span>
                <span>)"+roomno[12]+R"(</span>
              </div>

              <div class="SLOT slot14 )"+type[13]+R"(">
                <span>)"+course_Code[13]+R"(</span>
                <span>)"+teacher[13]+R"(</span>
                <span>)"+roomno[13]+R"(</span>
              </div>

              <div class="SLOT slot15 )"+type[14]+R"(">
                <span>)"+course_Code[14]+R"(</span>
                <span>)"+teacher[14]+R"(</span>
                <span>)"+roomno[14]+R"(</span>
              </div>

              <div class="SLOT slot16 )"+type[15]+R"(">
                <span>)"+course_Code[15]+R"(</span>
                <span>)"+teacher[15]+R"(</span>
                <span>)"+roomno[15]+R"(</span>
              </div>

              <div class="SLOT slot17 )"+type[16]+R"(">
                <span>)"+course_Code[16]+R"(</span>
                <span>)"+teacher[16]+R"(</span>
                <span>)"+roomno[16]+R"(</span>
              </div>

              <div class="SLOT slot18 )"+type[17]+R"(">
                <span>)"+course_Code[17]+R"(</span>
                <span>)"+teacher[17]+R"(</span>
                <span>)"+roomno[17]+R"(</span>
              </div>

              <div class="SLOT slot19 )"+type[18]+R"(">
                <span>)"+course_Code[18]+R"(</span>
                <span>)"+teacher[18]+R"(</span>
                <span>)"+roomno[18]+R"(</span>
              </div>

              <div class="SLOT slot20 )"+type[19]+R"(">
                <span>)"+course_Code[19]+R"(</span>
                <span>)"+teacher[19]+R"(</span>
                <span>)"+roomno[19]+R"(</span>
              </div>

              <div class="SLOT slot21 )"+type[20]+R"(">
                <span>)"+course_Code[20]+R"(</span>
                <span>)"+teacher[20]+R"(</span>
                <span>)"+roomno[20]+R"(</span>
              </div>

              <div class="SLOT slot22 )"+type[21]+R"(">
                <span>)"+course_Code[21]+R"(</span>
                <span>)"+teacher[21]+R"(</span>
                <span>)"+roomno[21]+R"(</span>
              </div>

              <div class="SLOT slot23 )"+type[22]+R"(">
                <span>)"+course_Code[22]+R"(</span>
                <span>)"+teacher[22]+R"(</span>
                <span>)"+roomno[22]+R"(</span>
              </div>

              <div class="SLOT slot24 )"+type[23]+R"(">
                <span>)"+course_Code[23]+R"(</span>
                <span>)"+teacher[23]+R"(</span>
                <span>)"+roomno[23]+R"(</span>
              </div>

              <div class="SLOT slot25 )"+type[24]+R"(">
                <span>)"+course_Code[24]+R"(</span>
                <span>)"+teacher[24]+R"(</span>
                <span>)"+roomno[24]+R"(</span>
              </div>

              <div class="SLOT slot26 )"+type[25]+R"(">
                <span>)"+course_Code[25]+R"(</span>
                <span>)"+teacher[25]+R"(</span>
                <span>)"+roomno[25]+R"(</span>
              </div>

              <div class="SLOT slot27 )"+type[26]+R"(">
                <span>)"+course_Code[26]+R"(</span>
                <span>)"+teacher[26]+R"(</span>
                <span>)"+roomno[26]+R"(</span>
              </div>

              <div class="SLOT slot28 )"+type[27]+R"(">
                <span>)"+course_Code[27]+R"(</span>
                <span>)"+teacher[27]+R"(</span>
                <span>)"+roomno[27]+R"(</span>
              </div>

              <div class="SLOT slot29 )"+type[28]+R"(">
                <span>)"+course_Code[28]+R"(</span>
                <span>)"+teacher[28]+R"(</span>
                <span>)"+roomno[28]+R"(</span>
              </div>

              <div class="SLOT slot30 )"+type[29]+R"(">
                <span>)"+course_Code[29]+R"(</span>
                <span>)"+teacher[29]+R"(</span>
                <span>)"+roomno[29]+R"(</span>
              </div>

              <div class="SLOT slot31 )"+type[30]+R"(">
                <span>)"+course_Code[30]+R"(</span>
                <span>)"+teacher[30]+R"(</span>
                <span>)"+roomno[30]+R"(</span>
              </div>

              <div class="SLOT slot32 )"+type[31]+R"(">
                <span>)"+course_Code[31]+R"(</span>
                <span>)"+teacher[31]+R"(</span>
                <span>)"+roomno[31]+R"(</span>
              </div>

              <div class="SLOT slot33 )"+type[32]+R"(">
                <span>)"+course_Code[32]+R"(</span>
                <span>)"+teacher[32]+R"(</span>
                <span>)"+roomno[32]+R"(</span>
              </div>

              <div class="SLOT slot34 )"+type[33]+R"(">
                <span>)"+course_Code[33]+R"(</span>
                <span>)"+teacher[33]+R"(</span>
                <span>)"+roomno[33]+R"(</span>
              </div>

              <div class="SLOT slot35 )"+type[34]+R"(">
                <span>)"+course_Code[34]+R"(</span>
                <span>)"+teacher[34]+R"(</span>
                <span>)"+roomno[34]+R"(</span>
              </div>

              <div class="SLOT slot36 )"+type[35]+R"(">
                <span>)"+course_Code[35]+R"(</span>
                <span>)"+teacher[35]+R"(</span>
                <span>)"+roomno[35]+R"(</span>
              </div>

              <div class="SLOT slot37 )"+type[36]+R"(">
                <span>)"+course_Code[36]+R"(</span>
                <span>)"+teacher[36]+R"(</span>
                <span>)"+roomno[36]+R"(</span>
              </div>

              <div class="SLOT slot38 )"+type[37]+R"(">
                <span>)"+course_Code[37]+R"(</span>
                <span>)"+teacher[37]+R"(</span>
                <span>)"+roomno[37]+R"(</span>
              </div>

              <div class="SLOT slot39 )"+type[38]+R"(">
                <span>)"+course_Code[38]+R"(</span>
                <span>)"+teacher[38]+R"(</span>
                <span>)"+roomno[38]+R"(</span>
              </div>

              <div class="SLOT slot40 )"+type[39]+R"(">
                <span>)"+course_Code[39]+R"(</span>
                <span>)"+teacher[39]+R"(</span>
                <span>)"+roomno[39]+R"(</span>
              </div>
              
            </div>
          </div>
        </div>
      </div>
    </div>
    <script src="//momentjs.com/downloads/moment-with-locales.min.js"></script>
    <script>
      function themeF() {}
      const Theme = document.getElementById("Theme");
      Theme.onclick = function () {
        document.body.classList.toggle("dark-theme");
      };
      function pageLoad() {
        displayDay();
        displayDate();
        updateWeekNumbers();
        themeF();
      }
      var draggableDiv = document.getElementById("mydiv");
      var isDragging = false;
      var offsetX, offsetY;

      draggableDiv.addEventListener("mousedown", function (e) {
        isDragging = true;
        offsetX = e.clientX - draggableDiv.getBoundingClientRect().left;
        offsetY = e.clientY - draggableDiv.getBoundingClientRect().top;
      });

      document.addEventListener("mousemove", function (e) {
        if (isDragging) {
          var x = e.clientX - offsetX;
          var y = e.clientY - offsetY;
          draggableDiv.style.left = x + "px";
          draggableDiv.style.top = y + "px";
        }
      });

      document.addEventListener("mouseup", function () {
        isDragging = false;
      });

      // Make the text input editable
      var editableTextBox = document.getElementById("editableTextBox");
      editableTextBox.addEventListener("dblclick", function () {
        editableTextBox.removeAttribute("readonly");
      });

      editableTextBox.addEventListener("blur", function () {
        editableTextBox.setAttribute("readonly", "readonly");
      });

      //LOLLLLLLLLLLLLLLLLLLLLLLLLLL

      function updateWeekNumbers() {
        const currentDate = new Date();
        const labels = document.querySelectorAll(
          ".sun, .mon, .tue, .wed, .thu, .fri, .sat"
        );

        // Calculate the start of the current week (Sunday)
        const startDate = new Date(currentDate);
        startDate.setDate(currentDate.getDate() - currentDate.getDay());

        // Loop through the labels and update their text content with day numbers
        labels.forEach((label, index) => {
          const date = new Date(startDate);
          date.setDate(startDate.getDate() + index);
          const dayNumber = date.getDate();

          // Wrap around for days below 1 (previous month) or above 31 (next month)
          label.textContent =
            dayNumber <= 0
              ? 31 + dayNumber
              : dayNumber > 31
              ? dayNumber - 31
              : dayNumber;
        });
      }

      updateWeekNumbers();
    </script>
    <script src="https://cdnjs.cloudflare.com/ajax/libs/jquery/3.3.1/jquery.min.js"></script>
    <script src="faltu.js"></script>
    <script src="ghatiya.js"></script>
  </body>
</html>

    )";

    return htmlContent;
}

int mod_resp(string roomno[],string course[],string teacher[],string type[]) {
    // Get CSS-related data from your backend logic
    double divOpacity = 0.7; // Replace with your actual logic to get the opacity

    std::string htmlContent = generateHTMLWithCSS_mod(roomno,course,teacher,type);

    std::ofstream outFile("Front End\\rilliM_updtate.html");
    outFile << htmlContent;

    return 0;
}


void mod_res_str(string batch_m){
  string weekdays[] = {"monday", "tuesday", "wednesday", "thursday", "friday"};
  string timeslots[] = {"08:30", "09:30", "10:30", "11:30", "13:30", "14:30","15:30","16:30"};

  string roomno_mod[40];
  string course_mod[40];
  string teacher_mod[40];
  string type_mod[40];
  for (int i = 0; i < 40; ++i) {
    roomno_mod[i] = "DefaultRoom";
    course_mod[i] = "DefaultCourse";
    teacher_mod[i] = "DefaultTeacher";
    type_mod[i] = "invis";
  }
  // 2 list day aur time ki jisse for loop chlega
  for(const string& day : weekdays){
    for(const string& time : timeslots){
      Class slot = search(day,time,batch_m);  //yha pr batch use krk usko mod ko show kr rha hu
      int slot_no = getCoordinateNumber(day,time);
      // cout<<day<<" "<<time<<" "<<slot_no<<endl;
      roomno_mod[slot_no-1] = slot.room_No;
      course_mod[slot_no-1] = slot.course_Code;
      teacher_mod[slot_no-1] = slot.professor;
      type_mod[slot_no-1] = slot.type;
    }
  }

  mod_resp(roomno_mod,course_mod,teacher_mod,type_mod);

}





// int main() {
//     // Get CSS-related data from your backend logic
//     double divOpacity = 0.7; // Replace with your actual logic to get the opacity

//     std::string htmlContent = generateHTMLWithCSS();

//     std::ofstream outFile("Front End\\rilli_updtae.html");
//     outFile << htmlContent;

//     return 0;
// }