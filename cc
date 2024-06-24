 -- // Silent.cc
  


  local DraccIsBlack = Corrupt.CFrame


  for i,v in pairs(game.Workspace:GetDescendants()) do 
    if v:IsA("Seat") then 
        v.Disabled = Corrupt.Options["Disable Seats"]
    end
  end
  
  local smoothplastic = Enum.Material.SmoothPlastic
  local objects = {}
  
  local function scan(object)
    local objectlist = object:GetChildren()
    for i = 1, #objectlist do
        if objectlist[i]:IsA('BasePart') then
            objects[objectlist[i]] = objectlist[i].Material
        end
        scan(objectlist[i])
    end
  end
  
  scan(workspace)
  
  if not Corrupt.Options["Low Graphics"] then
    for i in pairs(objects) do
        i.Material = objects[i]
    end
  else
    for i in pairs(objects) do
        i.Material = smoothplastic
        --wait()s
    end
  end
  
  local utility = {
    Invite = "nigger",
    Folder = "Corrupt.lua Settings",
    Version = "1.0.0",
    Ping = 5,
    Bypass = {
        2788229376, -- Da hood
        12927359803, -- Dah Aim Trainer
        12867571492, -- KatanaHood
        11867820563, -- Dae Hood
        12618586930, -- Dat Hood
        13018411607, -- Dat Hood 2
        13018411607, -- // Dat Hood Backup
        9633073067, -- // Del Hood
        11956541652, --// Dav Hood
        10100958808, -- // Da Downhill
        12815368779, -- // Da Hood Aim Trainer
        13126185789, -- // Da Hood Aim Trainer VC
    }
  }
  
  
  if not LPH_OBFUSCATED and not LPH_JIT_ULTRA then
    LPH_NO_VIRTUALIZE = function(f) return f end
    LRM_UserNote = ""
    LRM_LinkedDiscordID = 1
    LRM_TotalExecutions = 1
    LRM_SecondsLeft = 9999
  end
  
  getgenv().luarmor_vars = {
    ID = LRM_LinkedDiscordID,
  }
  
  
  
  local AkaliNotif = loadstring(game:HttpGet("https://raw.githubusercontent.com/23Asmo/evolutionfixes/main/akaliluaevo"))();
  local gggg = AkaliNotif.Notify;
  
  local notificationLibrary = loadstring(game:HttpGet("https://raw.githubusercontent.com/23Asmo/evolutionfixes/main/xaxanoti"))();
  local notifications = notificationLibrary.new({            
    NotificationLifetime = 3, 
    NotificationPosition = "Middle",
    
    TextFont = Enum.Font.Code,
    TextColor = Color3.fromRGB(255, 255, 255),
    TextSize = 15,
    
    TextStrokeTransparency = 0, 
    TextStrokeColor = Color3.fromRGB(0, 0, 0)
  });
  
  notifications:BuildNotificationUI();
  
  
  getgenv().notify = function(txt) 
    if Corrupt.Options["Allow Notifications"] then
        if string.lower(Corrupt.Options["Notifcation Type"]) == "akali" then 
            gggg({
                Description = txt;
                Title = "Corrupt.lua";
                Duration = Corrupt.Options["Notifcation Duration"];
            });
        elseif string.lower(Corrupt.Options["Notifcation Type"]) == "roblox" then
            game:GetService("StarterGui"):SetCore("SendNotification",{
                Title = "Corrupt.lua",
                Text = txt, 
                Icon = "rbxassetid://17642299576",
                Duration = Corrupt.Options["Notifcation Duration"]
            })
        elseif string.lower(Corrupt.Options["Notifcation Type"]) == "xaxa" then
            notifications:Notify(txt);
        end
  
    end
  end
  
  local bypass = {
    hoodmodded = function() 
        for i,v in next, getgc(true) do
            if typeof(v)=="table" and rawget(v,"DoThings") then
                v.DoThings = function() end
            end
        end
    end,
    untitledhood = function() 
        local _1;
        _1 = hookmetamethod(game, "__namecall", function(self, ...)
            if not checkcaller() and getnamecallmethod() == "FireServer" then
                if tostring(self.Name) == ".gg/untitledhood" then
                    local args = {...}
                    if tostring(args[1]) == "ForceDetect" or tostring(args[1]) == "TeleportDetect" or tostring(args[1]) == "GUI_CHECK" then
                        return 
                    end
                end
            end
            return _1(self, ...);
        end)
    end,
    adonis = function()
        for k,v in pairs(getgc(true)) do
            if pcall(function() return rawget(v,"indexInstance") end) and type(rawget(v,"indexInstance")) == "table" and  (rawget(v,"indexInstance"))[1] == "kick" then
                v.tvk = {"kick",function() return game.Workspace:WaitForChild("") end}
            end
        end
    end
  }
  
  if game.PlaceId == 5602055394 or game.PlaceId == 7951883376 then
    bypass.hoodmodded()
  elseif game.PlaceId == 9183932460 or game.PlaceId == 9435785899 then
    bypass.untitledhood()
  elseif table.find(utility.Bypass,game.PlaceId) then 
    bypass.adonis()
  end
  

  local Players = game:GetService("Players")
  local RunService = game:GetService("RunService")
  local Workspace = game:GetService("Workspace")
  local Gui = game:GetService("GuiService")
  
  local SilentTarget = nil
  local CamlockTarget = nil
  local ClosestPointCF = nil
  local ClosestPointCF2 = nil
  local PredictionValue = 0.133
  local PredictionValue2 = 0.133
  local closestsilentbodypart = Corrupt["Bullet Redirection"]["Target Part"]
  local closestcamlockpart = Corrupt["Aim Assist"]["Target Part"]
  local LocalPlayer = Players.LocalPlayer
  local mouse = LocalPlayer:GetMouse()
  local CurrentCamera = Workspace.CurrentCamera
  local v3 = Vector3
  local v2 = Vector2
  local CF = CFrame
  
  if Corrupt["Options"]["Intro"] then 
    local cam = workspace.CurrentCamera
    local x = cam.ViewportSize.X
    local y = cam.ViewportSize.Y
    local newx = math.floor(x * 0.5)
    local newy = math.floor(y * 0.5)
  
    local SpashScreen = Instance.new("ScreenGui")
    local Image = Instance.new("ImageLabel")
    SpashScreen.Name = "SpashScreen"
    SpashScreen.Parent = game.CoreGui
    SpashScreen.ZIndexBehavior = Enum.ZIndexBehavior.Sibling
    Image.Name = "Image"
    Image.Parent = SpashScreen
    Image.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
    Image.BackgroundTransparency = 1
    Image.Position = UDim2.new(0, newx, 0, newy)
    Image.Size = UDim2.new(0, 825, 0, 600)
    Image.Image = "rbxassetid://18194885331"
    Image.ImageTransparency = 1
    Image.AnchorPoint = Vector2.new(0.5,0.5)
  
    local Blur = Instance.new("BlurEffect")
    Blur.Parent = game.Lighting
    Blur.Size = 0
    Blur.Name = math.random(1,123123)
  
  
    local function gui(last, sex, t, s, inorout)
        local TI = TweenInfo.new(t or 1, s or Enum.EasingStyle.Sine, Enum.EasingDirection.InOut)
        local Tweening = game:GetService("TweenService"):Create(last, TI, sex)
        Tweening:Play()
    end
  
    gui(Image, {ImageTransparency = 0},0.3)
    gui(Blur, {Size = 20},0.3)
    wait(3)
    gui(Image, {ImageTransparency = 1},0.3)
    gui(Blur, {Size = 0},0.3)
    wait(0.3)
  end
  
if getgenv().Corrupt.Textures.Enabled == true then
  local function setWhiteColor(obj)
    if obj:IsA("BasePart") then
        obj.Color = Corrupt.Textures.Color  -- Set color to white
    end
    for _, child in ipairs(obj:GetChildren()) do
        setWhiteColor(child)
    end
end

setWhiteColor(game.Workspace)
end


  local Circle = Drawing.new("Circle")
  Circle.Transparency = Corrupt.FOV["Bullet Redirection"].Transparency
  Circle.Radius = Corrupt.FOV["Bullet Redirection"].Size * 3
  Circle.Visible = Corrupt.FOV["Bullet Redirection"].Visible
  Circle.Color = Corrupt.FOV["Bullet Redirection"].Color
  Circle.Thickness = Corrupt.FOV["Bullet Redirection"].Thickness
  Circle.Filled = Corrupt.FOV["Bullet Redirection"].Filled
  
  local Circle2 = Drawing.new("Circle")
  Circle2.Transparency = Corrupt.FOV["Aim Assist"].Transparency
  Circle2.Radius = Corrupt.FOV["Aim Assist"].Size * 3
  Circle2.Visible = Corrupt.FOV["Aim Assist"].Visible
  Circle2.Color = Corrupt.FOV["Aim Assist"].Color
  Circle2.Thickness = Corrupt.FOV["Aim Assist"].Thickness
  Circle2.Filled = Corrupt.FOV["Aim Assist"].Filled
  

  

  
  OnScreen = function(Object)
    local _, screen = CurrentCamera:WorldToScreenPoint(Object.Position)
    return screen
  end
  
  CalculateChance = function(Percentage)
    Percentage = math.floor(Percentage)
    local chance = math.floor(Random.new().NextNumber(Random.new(), 0, 1) * 100) / 100
  
    return chance < Percentage / 100
  end
  
  RayCastCheck = function(Part, PartDescendant)
    local Character = LocalPlayer.Character or LocalPlayer.CharacterAdded.Wait(LocalPlayer.CharacterAdded)
    local Origin = CurrentCamera.CFrame.Position
  
    local RayCastParams = RaycastParams.new()
    RayCastParams.FilterType = Enum.RaycastFilterType.Blacklist
    RayCastParams.FilterDescendantsInstances = {Character, CurrentCamera}
  
    local Result = Workspace.Raycast(Workspace, Origin, Part.Position - Origin, RayCastParams)
    
    if (Result) then
        local PartHit = Result.Instance
        local Visible = (not PartHit or Instance.new("Part").IsDescendantOf(PartHit, PartDescendant))
        
        return Visible
    end
    return false
  end
  
  Alive = function(Plr)
    if Plr and Plr.Character and Plr.Character:FindFirstChild("HumanoidRootPart") ~= nil and Plr.Character:FindFirstChild("Humanoid") ~= nil and Plr.Character:FindFirstChild("Head") ~= nil then
        return true
    end
    return false
  end
  
  
  GetMagnitudeFromMouse = function(Part)
    local PartPos, OnScreen = CurrentCamera:WorldToScreenPoint(Part.Position)
    if OnScreen then
        local Magnitude = (v2.new(PartPos.X, PartPos.Y) - v2.new(mouse.X, mouse.Y)).Magnitude
        return Magnitude
    end
    return math.huge
  end
  
  
  GetPrediction = function() 
    if Corrupt["Latency"]["Auto Prediction"].Enabled then 
  
        local PingStats = game:GetService("Stats").Network.ServerStatsItem["Data Ping"]:GetValueString()
        local Value = tostring(PingStats)
        local PingValue = Value:split(" ")
        local PingNumber = tonumber(PingValue[1])
        if string.lower(Corrupt.Latency["Auto Prediction"]["Type"]) == "regular" then 
            return tonumber(PingNumber / 225 * 0.1 + 0.1)
        elseif string.lower(Corrupt.Latency["Auto Prediction"]["Type"]) == "beta" then 
            if PingNumber < 130 then
                return tonumber(PingNumber / 1000 + 0.037)
            else
                return tonumber(PingNumber / 1000 + 0.033)
            end
        elseif string.lower(Corrupt.Latency["Auto Prediction"]["Type"]) == "v2" then 
            return tonumber(0.1 + (PingNumber / 2000) + ((PingNumber / 1000) * (PingNumber / 1500) * 1.025))
            --[[if PingNumber < 360 then
                return 0.16537
            elseif PingNumber < 270 then
                return 0.195566
            elseif PingNumber < 260 then
                return 0.175566
            elseif PingNumber < 250 then
                return 0.1651
            elseif PingNumber < 240 then
                return 0.16780
            elseif PingNumber < 230 then
                return 0.15692
            elseif PingNumber < 220 then
                return 0.165566
            elseif PingNumber < 210 then
                return 0.16780
            elseif PingNumber < 200 then
                return 0.165566
            elseif PingNumber < 190 then
                return 0.166547
            elseif PingNumber < 180 then
                return 0.19284
            elseif PingNumber < 170 then
                return 0.1923111 
            elseif PingNumber < 160 then
                return 0.16
            elseif PingNumber < 150 then
                return 0.15
            elseif PingNumber < 140 then
                return 0.1223333
            elseif PingNumber < 130 then
                return 0.156692
            elseif PingNumber < 120 then
                return 0.143765
            elseif PingNumber < 110 then
                return 0.1455
            elseif PingNumber < 100 then
                return 0.130340
            elseif PingNumber < 90 then
                return 0.136
            elseif PingNumber < 80 then
                return 0.1347
            elseif PingNumber < 70 then
                return 0.119
            elseif PingNumber < 60 then
                return 0.12731
            elseif PingNumber < 50 then
                return 0.127668
            elseif PingNumber < 40 then
                return 0.125
            elseif PingNumber < 30 then
                return 0.11
            elseif PingNumber < 20 then
                return 0.12588
            elseif PingNumber < 10 then
                return 0.9
            end]]
        elseif string.lower(Corrupt.Latency["Auto Prediction"]["Type"]) == "Auto" then 
            if PingNumber < 30 then
                return tonumber(Corrupt.Latency["Auto Prediction"]["AutoPred"].Ping20)
            elseif PingNumber < 40 then
                return tonumber(Corrupt.Latency["Auto Prediction"]["AutoPred"].Ping30)
            elseif PingNumber < 50 then
                return tonumber(Corrupt.Latency["Auto Prediction"]["AutoPred"].Ping40)
            elseif PingNumber < 60 then
                return tonumber(Corrupt.Latency["Auto Prediction"]["AutoPred"].Ping50)
            elseif PingNumber < 70 then
                return tonumber(Corrupt.Latency["Auto Prediction"]["AutoPred"].Ping60)
            elseif PingNumber < 80 then
                return tonumber(Corrupt.Latency["Auto Prediction"]["AutoPred"].Ping70)
            elseif PingNumber < 90 then
                return tonumber(Corrupt.Latency["Auto Prediction"]["AutoPred"].Ping80)
            elseif PingNumber < 100 then
                return tonumber(Corrupt.Latency["Auto Prediction"]["AutoPred"].Ping90)
            elseif PingNumber < 110 then
                return tonumber(Corrupt.Latency["Auto Prediction"]["AutoPred"].Ping100)
            elseif PingNumber < 120 then
                return tonumber(Corrupt.Latency["Auto Prediction"]["AutoPred"].Ping110)
            elseif PingNumber < 130 then
                return tonumber(Corrupt.Latency["Auto Prediction"]["AutoPred"].Ping120)
            elseif PingNumber < 140 then
                return tonumber(Corrupt.Latency["Auto Prediction"]["AutoPred"].Ping130)
            elseif PingNumber < 150 then
                return tonumber(Corrupt.Latency["Auto Prediction"]["AutoPred"].Ping140)
            elseif PingNumber < 160 then
                return tonumber(Corrupt.Latency["Auto Prediction"]["AutoPred"].Ping150)
            elseif PingNumber < 170 then
                return tonumber(Corrupt.Latency["Auto Prediction"]["AutoPred"].Ping160)
            elseif PingNumber < 180 then
                return tonumber(Corrupt.Latency["Auto Prediction"]["AutoPred"].P1ing70)
            elseif PingNumber < 190 then
                return tonumber(Corrupt.Latency["Auto Prediction"]["AutoPred"].Ping180)
            elseif PingNumber < 200 then
                return tonumber(Corrupt.Latency["Auto Prediction"]["AutoPred"].Ping190)
            elseif PingNumber < 210 then
                return tonumber(Corrupt.Latency["Auto Prediction"]["AutoPred"].Ping200)
            end
        end
    else
        return tonumber(Corrupt["Bullet Redirection"].Prediction)
    end
  end
  
  FindCrew = function(Player)
  if Player:FindFirstChild("DataFolder") and Player.DataFolder:FindFirstChild("Information") and Player.DataFolder.Information:FindFirstChild("Crew") and LocalPlayer:FindFirstChild("DataFolder") and LocalPlayer.DataFolder:FindFirstChild("Information") and LocalPlayer.DataFolder.Information:FindFirstChild("Crew") then
        if LocalPlayer.DataFolder.Information:FindFirstChild("Crew").Value ~= nil and Player.DataFolder.Information:FindFirstChild("Crew").Value ~= nil and Player.DataFolder.Information:FindFirstChild("Crew").Value ~= "" and LocalPlayer.DataFolder.Information:FindFirstChild("Crew").Value ~= "" then 
      return true
    end
  end
  return false
  end
  
  CheckDistance = function(Player)
    if (Player.Character.HumanoidRootPart.Position - game.Players.LocalPlayer.Character.HumanoidRootPart.Position).Magnitude > Corrupt.Checks.Distance["Max Distance"] then 
        return true
    else
        return false
    end
  end
  
  GetDistance = function(Player)
    if Player ~= nil and Player.Character and Player.Character:FindFirstChild("HumanoidRootPart") then 
        return math.floor((Player.Character.HumanoidRootPart.Position - game.Players.LocalPlayer.Character.HumanoidRootPart.Position).Magnitude)
    else
        return 0
    end
  end
  
  GetHealth = function(Player)
    if Player ~= nil and Player.Character and Player.Character:FindFirstChild("Humanoid") then 
        return tostring(math.floor(Player.Character.Humanoid.Health).."/"..math.floor(Player.Character.Humanoid.MaxHealth))
    else
        return "0/100"
    end
  end
  
  GetGunName = function(Name)
    local split = string.split(string.split(Name, "[")[2], "]")[1]
    return split
  end
  
  GetCurrentWeaponName = function()
    if LocalPlayer.Character and LocalPlayer.Character:FindFirstChildWhichIsA("Tool") then
       local Tool =  LocalPlayer.Character:FindFirstChildWhichIsA("Tool")
       if string.find(Tool.Name, "%[") and string.find(Tool.Name, "%]") and not string.find(Tool.Name, "Wallet") and not string.find(Tool.Name, "Phone") then
          return GetGunName(Tool.Name)
       end
    end
    return nil
  end
  
  WTS = function(Object)
  local ObjectVector = CurrentCamera:WorldToScreenPoint(Object.Position)
  return v2.new(ObjectVector.X, ObjectVector.Y)
  end
  
  Filter = function(obj)
  if (obj:IsA('BasePart')) then
    return true
  end
  end
  
  mousePosv2 = function()
  return v2.new(mouse.X, mouse.Y) 
  end
  
  IsOnScreen2 = function(Object)
    local IsOnScreen = CurrentCamera:WorldToScreenPoint(Object.Position)
    return IsOnScreen
  end
  
  FilterObjs = function(Object)
    if string.find(Object.Name, "Gun") then
        return
    end
    if table.find({"Part", "MeshPart", "BasePart"}, Object.ClassName) then
        return true
    end
  end
  
  
  
  
  function GetClosestPointOfPart(Part)
    local mouseray = mouse.UnitRay
    mouseray = mouseray.Origin + (mouseray.Direction * (Part.Position - mouseray.Origin).Magnitude)
    local point =
        (mouseray.Y >= (Part.Position - Part.Size / 2).Y and mouseray.Y <= (Part.Position + Part.Size / 2).Y) and
            (Part.Position + Vector3.new(0, -Part.Position.Y + mouseray.Y, 0)) or Part.Position
    local check = RaycastParams.new()
    check.FilterType = Enum.RaycastFilterType.Whitelist
    check.FilterDescendantsInstances = {Part}
    local ray = game:GetService("Workspace"):Raycast(mouseray, (point - mouseray), check)
    if ray then
        return ray.Position
    else
        return mouse.Hit.Position
    end
  end
  
  
  GetClosestBodyPart = function()
    local character = SilentTarget.Character
    local ClosestDistance = 1 / 0
    local BodyPart = nil
    if (character and character:GetChildren()) then
        for _, x in next, character:GetChildren() do
            if FilterObjs(x) and IsOnScreen2(x) then
                local Distance = (WTS(x) - v2.new(mouse.X, mouse.Y)).Magnitude
                    if (Distance < ClosestDistance) then
                        ClosestDistance = Distance
                        BodyPart = x
                    end
            end
        end
    end
    if Corrupt["Bullet Redirection"]["Nearest Part To Cursor"] then 
        closestsilentbodypart = tostring(BodyPart)
    else
        closestsilentbodypart = Corrupt["Bullet Redirection"]["Target Part"]
    end
  
  end
  
  GetClosestBodyPart2 = function()
    local character = CamlockTarget.Character
    local ClosestDistance = 1 / 0
    local BodyPart = nil
    if (character and character:GetChildren()) then
        for _, x in next, character:GetChildren() do
            if FilterObjs(x) and IsOnScreen2(x) then
                local Distance = (WTS(x) - v2.new(mouse.X, mouse.Y)).Magnitude
                    if (Distance < ClosestDistance) then
                        ClosestDistance = Distance
                        BodyPart = x
                    end
            end
        end
    end
    if Corrupt["Aim Assist"]["Nearest Part To Cursor"] then 
        closestcamlockpart = tostring(BodyPart)
    else
        closestcamlockpart = Corrupt["Aim Assist"]["Target Part"] 
    end
  end
  
  UpdateFOV = function()
    Circle.Transparency = Corrupt.FOV["Bullet Redirection"].Transparency
    Circle.Radius = Corrupt.FOV["Bullet Redirection"].Size * 3
    Circle.Visible = Corrupt.FOV["Bullet Redirection"].Visible
    Circle.Color = Corrupt.FOV["Bullet Redirection"].Color
    Circle.Thickness = Corrupt.FOV["Bullet Redirection"].Thickness
    Circle.Filled = Corrupt.FOV["Bullet Redirection"].Filled
    Circle.Position = v2.new(mouse.X, mouse.Y + Gui:GetGuiInset().Y)
    Circle2.Transparency = Corrupt.FOV["Aim Assist"].Transparency
    Circle2.Radius = Corrupt.FOV["Aim Assist"].Size * 3
    Circle2.Visible = Corrupt.FOV["Aim Assist"].Visible
    Circle2.Color = Corrupt.FOV["Aim Assist"].Color
    Circle2.Thickness = Corrupt.FOV["Aim Assist"].Thickness
    Circle2.Filled = Corrupt.FOV["Aim Assist"].Filled
    Circle2.Position = v2.new(mouse.X, mouse.Y + Gui:GetGuiInset().Y)
  end
  
  local safeplayers = {
    1496494935, -- darkzuees

  }
  
  GetClosestPlayer = function()
    local Target = nil
    local Closest = math.huge
    local HitChance = CalculateChance(Corrupt["Bullet Redirection"]["Hit Chance"])
  
    if not HitChance then
        return nil
    end
    for _, v in pairs(Players:GetPlayers()) do
        if v.Character and v ~= LocalPlayer and v.Character:FindFirstChild("HumanoidRootPart") then
            if not OnScreen(v.Character.HumanoidRootPart) then 
                continue 
            end
            if Corrupt.Checks["Visible Check"] and not RayCastCheck(v.Character.HumanoidRootPart, v.Character) then 
                continue 

            end
            if Corrupt.Checks["K.O Check"] and v.Character:FindFirstChild("BodyEffects") then
                local KoCheck 
                if v.Character.BodyEffects:FindFirstChild("KO") then 
                    KoCheck = v.Character.BodyEffects:FindFirstChild("KO").Value
                elseif v.Character.BodyEffects:FindFirstChild("K.O") then
                    KoCheck = v.Character.BodyEffects:FindFirstChild("K.O").Value
                end
                
                if KoCheck then
                    continue
                end
            end
            if Corrupt.Checks["Crew Check"] and FindCrew(v) and v.DataFolder.Information:FindFirstChild("Crew").Value == LocalPlayer.DataFolder.Information:FindFirstChild("Crew").Value then
                continue
            end
            if Corrupt.Checks["Friend Check"] and game.Players.LocalPlayer:IsFriendsWith(v.UserId) then
                continue
            end
  
            if Corrupt.Checks["Distance"].Enabled and CheckDistance(v) then
                continue
            end
  
  
            local Distance = GetMagnitudeFromMouse(v.Character.HumanoidRootPart)
  
            if (Distance < Closest and Circle.Radius + 10 > Distance) then
                Closest = Distance
                Target = v
            end
        end
    end
  
    SilentTarget = Target
    
  end
  
  GetClosestPlayer2 = function()
    local Target = nil
    local Closest = math.huge
    for _, v in pairs(Players:GetPlayers()) do
        if v.Character and v ~= LocalPlayer and v.Character:FindFirstChild("HumanoidRootPart") then
            if not OnScreen(v.Character.HumanoidRootPart) then 
                continue 
            end
            if Corrupt.Checks["Visible Check"] and not RayCastCheck(v.Character.HumanoidRootPart, v.Character) then 
                continue 
            end
            if Corrupt.Checks["K.O Check"] and v.Character:FindFirstChild("BodyEffects") then
                local KoCheck 
                if v.Character.BodyEffects:FindFirstChild("KO") then 
                    KoCheck = v.Character.BodyEffects:FindFirstChild("KO").Value
                elseif v.Character.BodyEffects:FindFirstChild("K.O").Value then
                    KoCheck = v.Character.BodyEffects:FindFirstChild("K.O").Value
                end
                
                if KoCheck then
                    continue
                end
            end
            if Corrupt.Checks["Crew Check"] and FindCrew(v) and v.DataFolder.Information:FindFirstChild("Crew").Value == LocalPlayer.DataFolder.Information:FindFirstChild("Crew").Value then
                continue
            end
            
            if Corrupt.Checks["Friend Check"] and game.Players.LocalPlayer:IsFriendsWith(v.UserId) then
                continue
            end
  
            if Corrupt.Checks["Distance"].Enabled and CheckDistance(v) then
                continue
            end
  
            local Distance = GetMagnitudeFromMouse(v.Character.HumanoidRootPart)
  
            if (Distance < Closest and Circle2.Radius + 10 > Distance) then
                Closest = Distance
                Target = v
            end
        end
    end
  
    CamlockTarget = Target
  end
  
  game:GetService("RunService").RenderStepped:Connect(function()
    if Corrupt["Bullet Redirection"].Enabled and Corrupt["Bullet Redirection"]["Closest Point"] and SilentTarget ~= nil and SilentTarget.Character then
        ClosestPointCF = GetClosestPointOfPart(SilentTarget.Character[closestsilentbodypart])
    end
  end)
  
  game:GetService("RunService").RenderStepped:Connect(function()
    if Corrupt["Aim Assist"].Enabled and Corrupt["Aim Assist"]["Closest Point"] and CamlockTarget ~= nil and CamlockTarget.Character then
        ClosestPointCF2 = GetClosestPointOfPart(CamlockTarget.Character[closestcamlockpart])
    end
  end)
  
  
  
  
  
  local services = {
    ["Players"] = game:GetService("Players"),
    ["RunService"] = game:GetService("RunService"),
  }
  
  local variables = {
    LocalPlayer = services["Players"].LocalPlayer,
    RenderStepped = services["RunService"].RenderStepped,
  }
  
  local function get_instance(from,name)
    if from ~= nil and name ~= nil then
        local inst = from:FindFirstChildOfClass(name)
        if not inst then
            inst = from:FindFirstChild(name)
        end
        if inst then
            return inst
        end
    end
  end
  
  RunService.Heartbeat:Connect(function()
    UpdateFOV()
    if Corrupt["Bullet Redirection"].Enabled then 
        if string.lower(Corrupt["Bullet Redirection"].Mode) == "fov" then 
            GetClosestPlayer()
        end
        PredictionValue = GetPrediction()
        if SilentTarget ~= nil then 
            GetClosestBodyPart()
        end
    end
    if Corrupt["Aim Assist"].Enabled then 
        if string.lower(Corrupt["Aim Assist"].Mode) == "fov" then 
            GetClosestPlayer2()
        end
        PredictionValue2 = GetPrediction()
        if CamlockTarget ~= nil then 
            GetClosestBodyPart2()
        end
    end
  end)
  
  
  
  mouse.KeyDown:Connect(function(Key)
    local Keybind = Corrupt["Bullet Redirection"]["Target Key"]:lower()
    local Keybind2 = Corrupt["Aim Assist"]["Target Key"]:lower()
    if (Key == Keybind) and Corrupt["Bullet Redirection"].Enabled then
        if string.lower(Corrupt["Bullet Redirection"].Mode) ==  "target" then 
            if SilentTarget == nil then 
                GetClosestPlayer()
                if Corrupt["Bullet Redirection"].Notify then 
                    if SilentTarget ~= nil then 
                        notify("Silent.cc Locked onto: "..tostring(SilentTarget))
                    else
                        notify("No Player Inside the Fov")
                    end
                end
            else
                SilentTarget = nil
                if Corrupt["Bullet Redirection"].Notify then 
                    notify("Silent.cc Unlocked!")
                end
            end
        end
    end
    if (Key == Keybind2 and Corrupt["Aim Assist"].Enabled) then
        if string.lower(Corrupt["Aim Assist"].Mode) ==  "target_toggle" then 
            if CamlockTarget == nil then 
                GetClosestPlayer2()
                if Corrupt["Aim Assist"].Notify then 
                    if CamlockTarget ~= nil then 
                        notify("Silent.cc Locked onto: "..tostring(CamlockTarget))
                    else
                        notify("No Player Inside the Fov")
                    end
                end
            else
                CamlockTarget = nil
                if Corrupt["Aim Assist"].Notify then 
                    notify("Silent.cc Unlocked!")
                end
            end
        end
    end
  end)
  
  mouse.KeyDown:Connect(function(Key)
    local Keybind2 = Corrupt["Aim Assist"]["Target Key"]:lower()
    if (Key == Keybind2 and Corrupt["Aim Assist"].Enabled) then
        if string.lower(Corrupt["Aim Assist"].Mode) ==  "target_hold" then 
            if CamlockTarget == nil then 
                GetClosestPlayer2()
                if Corrupt["Aim Assist"].Notify then 
                    if CamlockTarget ~= nil then 
                        notify("Locked onto: "..tostring(CamlockTarget))
                    else
                        notify("No Player In FOV")
                    end
                end
            end
        end
    end
  end)
  
  mouse.KeyUp:Connect(function(Key)
    local Keybind2 = Corrupt["Aim Assist"]["Target Key"]:lower()
    if (Key == Keybind2) then
        if string.lower(Corrupt["Aim Assist"].Mode) ==  "target_hold" then 
            CamlockTarget = nil
            if Corrupt["Aim Assist"].Notify then 
                notify("Unlocked")
            end
        end
    end
  end)
  
  spawn(function()
    while wait(0.5) do 
        if Corrupt.Options["Mute Boomboxes"] == true then 
            for i,v in pairs(game.Players:GetChildren()) do 
                if v.Name ~= game.Players.LocalPlayer.Name then 
                    if game.Players:FindFirstChild(v.Name) then 
                        repeat wait() until v.Character
                        for i,x in pairs(v.Character:GetDescendants()) do
                            if x:IsA("Sound") and x.Playing == true then
                                x.Playing = false
                            end
                        end
                    end
                end
            end
        end
    end
  end)
  
  
  local function get_calculated_velocity(obj)
    if nil_check(obj) and obj.Character and obj.Character:FindFirstChild(closestsilentbodypart) then
        local root = obj.Character.HumanoidRootPart
        local character = obj.Character 
  
        local currentPosition = root.Position
        local currentTime = tick() 
  
        wait(0.00350) 
  
        local newPosition = root.Position
        local newTime = tick()
        
        local distanceTraveled = (newPosition - currentPosition) 
  
        local timeInterval = newTime - currentTime
        local velocity = distanceTraveled / timeInterval
        currentPosition = newPosition
        currentTime = newTime
        return velocity
    end
  end
  
  local newvel = v3.new(0,0,0)
  local newvel2 = v3.new(0,0,0)
  
  mouse.KeyDown:Connect(function(Key)
    local Keybind = Corrupt.Resolver.Keybind:lower()
    if (Key == Keybind) then
        if Corrupt.Resolver["Keybind Enabled"] then 
            if Corrupt.Resolver.Enabled == true then 
                Corrupt.Resolver.Enabled = false
                notify("Resolver disabled.")
            else
                Corrupt.Resolver.Enabled = true
                notify("Resolver enabled.")
            end
        end
    end
  end)
  
  RunService.Heartbeat:Connect(function()
    if Corrupt.Resolver.Enabled and Corrupt["Bullet Redirection"].Enabled then 
        if Corrupt.Resolver.Method == "Delta" then 
            if SilentTarget ~= nil then 
                newvel = get_calculated_velocity(SilentTarget)
            end
        end
    end
  
    local targetbone
    local TargetCF
    local pos
    local char
  
    if SilentTarget ~= nil then 
        targetbone = SilentTarget.Character[closestsilentbodypart]
  
        if Corrupt["Bullet Redirection"]["Closest Point"] then
            TargetCF = CFrame.new(ClosestPointCF)
            --TargetCF = targetbone.CFrame
        else
            TargetCF = targetbone.CFrame
        end
  
        char = CurrentCamera:WorldToViewportPoint(SilentTarget.Character[closestsilentbodypart].Position)
        pos = workspace.CurrentCamera:WorldToViewportPoint(
        TargetCF.Position + v3.new(0,Corrupt["Bullet Redirection"]["Target Part Offset"],0) + 
            (SilentTarget.Character[closestsilentbodypart].AssemblyLinearVelocity *
            Corrupt["Bullet Redirection"].Prediction))
    end
end)
  
  RunService.Heartbeat:Connect(function()
    if Corrupt.Resolver.Enabled and Corrupt["Aim Assist"].Enabled then 
        if Corrupt.Resolver.Method == "Delta" then 
            if CamlockTarget ~= nil then 
                newvel2 = get_calculated_velocity(CamlockTarget)
            end
        end
    end
  
    local targetbone
    local TargetCF
    local pos
    local char
  
    if CamlockTarget ~= nil then 
        targetbone = CamlockTarget.Character[closestcamlockpart]
  
        if Corrupt["Aim Assist"]["Closest Point"] then
            TargetCF = CFrame.new(ClosestPointCF2)
            --TargetCF = targetbone.CFrame
        else
            TargetCF = targetbone.CFrame
        end
  
        char = CurrentCamera:WorldToViewportPoint(CamlockTarget.Character[closestcamlockpart].Position)
        pos = workspace.CurrentCamera:WorldToViewportPoint(
        TargetCF.Position + v3.new(0,Corrupt["Aim Assist"]["Target Part Offset"],0) + 
            (CamlockTarget.Character[closestcamlockpart].AssemblyLinearVelocity *
            Corrupt["Aim Assist"].Prediction))
  
  
    end
end)

  local MouseArgs = {
    "UpdateMousePosI",
    "MousePos",
    "MOUSE",
    "MousePosDEBUG",
    "GetMousePos",
  }
  
  local function GetArgs()
    if game.PlaceId == 2788229376 or game.PlaceId == 9825515356 or game.PlaceId == 16033173781 or game.PlaceId == 7213786345 then
        return "UpdateMousePosI"
    elseif game.PlaceId == 5602055394 or game.PlaceId == 7951883376 then
        return "MousePos"
    elseif game.PlaceId == 10100958808 or game.PlaceId == 12645617354 or game.PlaceId == 14171242539 or game.PlaceId == 14412436145 or game.PlaceId == 14412355918 or game.PlaceId == 14413720089 or game.PlaceId == 14413712255 or game.PlaceId == 14412601883 then
        return "MOUSE"
    elseif game.PlaceId == 1590803567 then
        return "MousePosDEBUG"
    elseif game.PlaceId == 9825515356 then
        return "GetMousePos"
    else
        return "UpdateMousePos"
    end
  end
  
  
  local function MainEvent()
    for _, v in pairs(game.ReplicatedStorage:GetChildren()) do
        if v.Name == "MainEvent" or v.Name == "Bullets" or v.Name == ".gg/untitledhood" or v.Name == "Remote" or v.Name == "MAINEVENT" then
            return v
        end
    end
  end
  
  game.Players.LocalPlayer.Character.ChildAdded:Connect(LPH_NO_VIRTUALIZE(function(tool)
    if tool:IsA("Tool") then
        tool.Activated:Connect(function()
            if Corrupt["Bullet Redirection"].Enabled then 
                if SilentTarget ~= nil then
                    local targetbone = SilentTarget.Character[closestsilentbodypart]
                    local offset = v3.new(0,0,0)
                    local TargetCF = targetbone.Position
                    local resolver = false

                    if Corrupt.Airshot.Enabled then 
                        if SilentTarget.Character.Humanoid.FloorMaterial == Enum.Material.Air then 
                            offset = v3.new(0,Corrupt.Airshot["Jump Offset"],0)
                        end
                    end
  
                    if Corrupt["Bullet Redirection"]["Closest Point"] then
                        TargetCF = ClosestPointCF
                    end
  
                    if Corrupt.Resolver.Enabled then 
                        resolver = true
                    end
        
        
                    if resolver then 
                        if Corrupt.Resolver.Method == "Move Direction" then 
                            targetbone.Velocity = SilentTarget.Character.Humanoid.MoveDirection * SilentTarget.Character.Humanoid.WalkSpeed
                            targetbone.AssemblyLinearVelocity = SilentTarget.Character.Humanoid.MoveDirection * SilentTarget.Character.Humanoid.WalkSpeed
                        elseif Corrupt.Resolver.Method == "No Prediction" then 
                            targetbone.Velocity = v3.new(0,0,0)
                            targetbone.AssemblyLinearVelocity = v3.new(0,0,0)
                        elseif Corrupt.Resolver.Method == "Delta" or  Corrupt.Resolver.Method == "Recalculate" then 
                            targetbone.Velocity = newvel
                            targetbone.AssemblyLinearVelocity = newvel
                        end
                    end
                    if Corrupt["Bullet Redirection"]["Anti Ground Shots"] then 
                        targetbone.Velocity = v3.new(targetbone.Velocity.X, targetbone.Velocity.Y * 0.5, targetbone.Velocity.Z)
                        targetbone.AssemblyLinearVelocity = v3.new(targetbone.Velocity.X, targetbone.Velocity.Y * 0.5, targetbone.Velocity.Z)
                    end
                    -- // oi
  
                    local Prediction = 
                    TargetCF + 
                    v3.new(0,Corrupt["Bullet Redirection"]["Target Part Offset"],0) + 
                    offset + 
                    targetbone.Velocity * 
                    PredictionValue 
                    MainEvent():FireServer(GetArgs(),Prediction)
                end
            end
        end)
    end
  end))
    
  game.Players.LocalPlayer.CharacterAdded:Connect(LPH_NO_VIRTUALIZE(function(Character)
    Character.ChildAdded:Connect(function(tool)
        if tool:IsA("Tool") then
            tool.Activated:Connect(function()
                if Corrupt["Bullet Redirection"].Enabled then 
                    if SilentTarget ~= nil then
                        local targetbone = SilentTarget.Character[closestsilentbodypart]
                        local offset = v3.new(0,0,0)
                        local TargetCF = targetbone.Position
                        local resolver = false
            
                        if Corrupt.Airshot.Enabled then 
                            if SilentTarget.Character.Humanoid.FloorMaterial == Enum.Material.Air then 
                                offset = v3.new(0,Corrupt.Airshot["Jump Offset"],0)
                            end
                        end
    
                        if Corrupt["Bullet Redirection"]["Closest Point"] then
                            TargetCF = ClosestPointCF
                        end
    
                        if Corrupt.Resolver.Enabled then 
                            resolver = true
                        end
            
            
                        if resolver then 
                            if Corrupt.Resolver.Method == "Move Direction" then 
                                targetbone.Velocity = SilentTarget.Character.Humanoid.MoveDirection * SilentTarget.Character.Humanoid.WalkSpeed
                                targetbone.AssemblyLinearVelocity = SilentTarget.Character.Humanoid.MoveDirection * SilentTarget.Character.Humanoid.WalkSpeed
                            elseif Corrupt.Resolver.Method == "No Prediction" then 
                                targetbone.Velocity = v3.new(0,0,0)
                                targetbone.AssemblyLinearVelocity = v3.new(0,0,0)
                            elseif Corrupt.Resolver.Method == "Delta" or  Corrupt.Resolver.Method == "Recalculate" then 
                                targetbone.Velocity = newvel
                                targetbone.AssemblyLinearVelocity = newvel
                            end
                        end
                        if Corrupt["Bullet Redirection"]["Anti Ground Shots"] then 
                            targetbone.Velocity = v3.new(targetbone.Velocity.X, targetbone.Velocity.Y * 0.5, targetbone.Velocity.Z)
                            targetbone.AssemblyLinearVelocity = v3.new(targetbone.Velocity.X, targetbone.Velocity.Y * 0.5, targetbone.Velocity.Z)
                        end
                        -- // oi
    
                        local Prediction = 
                        TargetCF + 
                        v3.new(0,Corrupt["Bullet Redirection"]["Target Part Offset"],0) + 
                        offset + 
                        targetbone.Velocity * 
                        PredictionValue 
                        MainEvent():FireServer(GetArgs(), Prediction)
                    end
                end
            end)
        end
    end)
  end))
  -- // uh oh the opps are here
  LPH_NO_VIRTUALIZE(function()
    game:GetService("RunService").RenderStepped:Connect(function()
        if Corrupt["Flags"]["Unlock Outside FOV"] and CamlockTarget and CamlockTarget.Character and CamlockTarget.Character:FindFirstChild(closestcamlockpart) then
            if Circle2.Radius <
                (Vector2.new(
                    CurrentCamera:WorldToScreenPoint(CamlockTarget.Character.HumanoidRootPart.Position).X,
                    CurrentCamera:WorldToScreenPoint(CamlockTarget.Character.HumanoidRootPart.Position).Y
                ) - Vector2.new(mouse.X, mouse.Y)).Magnitude
             then
                CamlockTarget = nil
            end
        end
        if Corrupt["Flags"]["Unlock On KO"] == true and CamlockTarget ~= nil and CamlockTarget.Character and CamlockTarget.Character:FindFirstChild(closestcamlockpart) then
            if CamlockTarget.Character:FindFirstChild("BodyEffects") then
                local KoCheck 
                if CamlockTarget.Character.BodyEffects:FindFirstChild("KO") then 
                    KoCheck = CamlockTarget.Character.BodyEffects:FindFirstChild("KO").Value
                elseif CamlockTarget.Character.BodyEffects:FindFirstChild("K.O") then
                    KoCheck = CamlockTarget.Character.BodyEffects:FindFirstChild("K.O").Value
                end
                
                if KoCheck then
                    CamlockTarget = nil   
                    if Corrupt["Aim Assist"].Notify then 
                        notify("Target Knocked, Unlocked.")
                    end
                end
            end
        end
        if Corrupt["Flags"]["Unlock Behind Wall"] == true and string.lower(Corrupt["Aim Assist"].Mode) ~= "fov" and CamlockTarget ~= nil and CamlockTarget.Character and CamlockTarget.Character:FindFirstChild(closestcamlockpart) then
            if not RayCastCheck(CamlockTarget.Character[closestcamlockpart], CamlockTarget.Character) then 
                CamlockTarget = nil   
                if Corrupt["Aim Assist"].Notify then 
                    notify("Target Behind Wall, Unlocked.")
                end
            end
        end
        if Corrupt["Aim Assist"].Enabled and CamlockTarget and CamlockTarget.Character and CamlockTarget.Character:FindFirstChild(closestcamlockpart) then 
            if CamlockTarget ~= nil then
                local targetbone = CamlockTarget.Character[closestcamlockpart]
                local offset = v3.new(0,0,0)
                local TargetCF = targetbone.Position
                local smoothing = 1
                local shake = v3.new(0,0,0)
                local resolver = false
  
                if Corrupt["Aim Assist"].Shake.Enabled then 
                    shake = v3.new(
                        math.random(-Corrupt["Aim Assist"].Shake.X, Corrupt["Aim Assist"].Shake.X),
                        math.random(-Corrupt["Aim Assist"].Shake.Y, Corrupt["Aim Assist"].Shake.Y),
                        math.random(-Corrupt["Aim Assist"].Shake.Z, Corrupt["Aim Assist"].Shake.Z)
                    ) * 0.1
                end
  
                if Corrupt["Aim Assist"].Smoothness.Enabled then 
                    smoothing = Corrupt["Aim Assist"].Smoothness.Value
                end
  
                if Corrupt.Airshot.Enabled then 
                    if CamlockTarget.Character.Humanoid.FloorMaterial == Enum.Material.Air then 
                        offset = v3.new(0,Corrupt.Airshot["Jump Offset"],0)
                        if Corrupt.Airshot["Aim Assist Smoothness"].Enabled then 
                            smoothing = Corrupt.Airshot["Aim Assist Smoothness"]["New Smoothness"]
                        end
                    end
                end
  
                if Corrupt["Aim Assist"]["Closest Point"] then
                    TargetCF = ClosestPointCF2
                end
  
                if Corrupt.Resolver.Enabled then 
                    resolver = true
                end
  
                if resolver then 
                    if Corrupt.Resolver.Method == "Move Direction" then 
                        targetbone.Velocity = CamlockTarget.Character.Humanoid.MoveDirection * CamlockTarget.Character.Humanoid.WalkSpeed
                        targetbone.AssemblyLinearVelocity = CamlockTarget.Character.Humanoid.MoveDirection * CamlockTarget.Character.Humanoid.WalkSpeed
                    elseif Corrupt.Resolver.Method == "No Prediction" then 
                        targetbone.Velocity = v3.new(0,0,0)
                        targetbone.AssemblyLinearVelocity = v3.new(0,0,0)
                    elseif Corrupt.Resolver.Method == "Delta" then 
                        targetbone.Velocity = newvel
                        targetbone.AssemblyLinearVelocity = newvel
                    end
                end
                if Corrupt["Bullet Redirection"]["Anti Ground Shots"] then 
                    targetbone.Velocity = v3.new(targetbone.Velocity.X, targetbone.Velocity.Y * 0.5, targetbone.Velocity.Z)
                    targetbone.AssemblyLinearVelocity = v3.new(targetbone.Velocity.X, targetbone.Velocity.Y * 0.5, targetbone.Velocity.Z)
                end
                -- // oi
  
                local Prediction = 
                TargetCF + 
                v3.new(0,Corrupt["Aim Assist"]["Target Part Offset"],0) + 
                offset + 
                targetbone.Velocity * 
                PredictionValue2 + shake
                local Main = CF.new(CurrentCamera.CFrame.p, Prediction)
                CurrentCamera.CFrame = CurrentCamera.CFrame:Lerp(Main, smoothing, Corrupt["Aim Assist"]["Easing Style"] , Enum.EasingDirection.InOut)
            end
        end
    end)
  end)()

  if DraccIsBlack.Enabled then
    repeat
        wait()
    until game:IsLoaded()
    local L_134_ = game:service('Players')
    local L_135_ = L_134_.LocalPlayer
    repeat
        wait()
    until L_135_.Character
    local L_136_ = game:service('UserInputService')
    local L_137_ = game:service('RunService')
    getgenv().Multiplier = 0.5
    local L_138_ = true
    local L_139_
    L_136_.InputBegan:connect(function(L_140_arg0)
        if L_140_arg0.KeyCode == Enum.KeyCode.LeftBracket then
            Multiplier = Multiplier + 0.01
            print(Multiplier)
            wait(0.2)
            while L_136_:IsKeyDown(Enum.KeyCode.LeftBracket) do
                wait()
                Multiplier = Multiplier + 0.01
                print(Multiplier)
            end
        end
        if L_140_arg0.KeyCode == Enum.KeyCode.RightBracket then
            Multiplier = Multiplier - 0.01
            print(Multiplier)
            wait(0.2)
            while L_136_:IsKeyDown(Enum.KeyCode.RightBracket) do
                wait()
                Multiplier = Multiplier - 0.01
                print(Multiplier)
            end
        end
        if L_140_arg0.KeyCode == Enum.KeyCode[DraccIsBlack.Toggle:upper()] then
            L_138_ = not L_138_
            if L_138_ == true then
                repeat
                    game.Players.LocalPlayer.Character.HumanoidRootPart.CFrame = game.Players.LocalPlayer.Character.HumanoidRootPart.CFrame + game.Players.LocalPlayer.Character.Humanoid.MoveDirection * Multiplier
                    game:GetService("RunService").Stepped:wait()
                until L_138_ == false
            end
        end
    end)
     
    

    local function GetArgs()
        if game.PlaceId == 2788229376 or game.PlaceId == 9825515356 or game.PlaceId == 16033173781 or game.PlaceId == 7213786345 then
    GetArgs() "UpdateMousePosI"
        else
            game.Players.LocalPlayer:Kick("Wait for silentcc to update")
        end
    end
    

    local Players = game:GetService("Players")
    local UserInputService = game:GetService("UserInputService")
    local TweenService = game:GetService("TweenService")
    local GuiService = game:GetService("GuiService")
    local localPlayer = Players.LocalPlayer
    local Camera = game.Workspace.CurrentCamera
    
    -- Function to determine if the UI should be hidden
    local function shouldHideUI()
        return GuiService:IsTenFootInterface()
    end
    
    local function isOnScreen(part)
        local vector, onScreen = Camera:WorldToViewportPoint(part.Position)
        return onScreen
    end
    
    local function createHighlight(targetPlayer)
        if shouldHideUI() then return end
    
        local character = targetPlayer.Character
        if character then
            local head = character:FindFirstChild("Head")
            if head then
                if isOnScreen(head) then
                    local billboardGui = Instance.new("BillboardGui")
                    billboardGui.Size = UDim2.new(4 * getgenv().Corrupt["Blink FOV"]["ScaleFactor"], 0, 7.5 * getgenv().Corrupt["Blink FOV"]["ScaleFactor"], 0) -- Adjusted size with scale factor
                    billboardGui.AlwaysOnTop = true
                    billboardGui.Parent = head
    
                    local frame = Instance.new("Frame")
                    frame.Size = UDim2.new(1, 0, 1, 0)
                    frame.BackgroundTransparency = 0.5 
                    frame.BackgroundColor3 = Color3.fromRGB(170, 0, 255) 
                    frame.Parent = billboardGui
    
                    local background = Instance.new("UIGradient")
                    background.Rotation = 45
                    background.Parent = frame
                    background.Color = ColorSequence.new{
                        ColorSequenceKeypoint.new(0, Color3.new(0, 0, 0)),
                        ColorSequenceKeypoint.new(1, Color3.fromRGB(170, 0, 255)) 
                    }
    
                    local tweenInfo = TweenInfo.new(getgenv().Corrupt["Blink FOV"]["Blink Speed"], Enum.EasingStyle.Linear, Enum.EasingDirection.Out)
                    local tween = TweenService:Create(frame, tweenInfo, {BackgroundTransparency = 1})
                    tween:Play()
    
                    tween.Completed:Connect(function()
                        billboardGui:Destroy()
                    end)
    
                    -- Adjust the position of the billboardGui
                    billboardGui.StudsOffset = getgenv().Corrupt["Blink FOV"]["BoxPosition"]
                end
            end
        end
    end
    
    local function highlightAllPlayers()
        for _, player in pairs(Players:GetPlayers()) do
            if player ~= localPlayer then
                createHighlight(player)
            end
        end
    end
    
    local function onKeyPress(input)
        if input.KeyCode == getgenv().Corrupt["Blink FOV"]["Blink Key"] then
            highlightAllPlayers()
        end
    end
    
    UserInputService.InputBegan:Connect(onKeyPress)
    

    local player = game.Players.LocalPlayer
local mouse = player:GetMouse()

local function createCrosshair()
    local config = getgenv().CrosshairConfig
    local crosshairConfig = config.Crosshair

    -- Create a ScreenGui
    local screenGui = Instance.new("ScreenGui")
    screenGui.Parent = player:WaitForChild("PlayerGui")

    -- Create a container for the crosshair lines
    local crosshairContainer = Instance.new("Frame")
    crosshairContainer.Size = UDim2.new(0, crosshairConfig.Size * 2 + crosshairConfig.Length, 0, crosshairConfig.Size * 2 + crosshairConfig.Length)
    crosshairContainer.Position = UDim2.new(0, 0, 0, 0)
    crosshairContainer.BackgroundTransparency = 1
    crosshairContainer.AnchorPoint = Vector2.new(0.5, 0.5)
    crosshairContainer.Parent = screenGui

    -- Create the top line
    local topLine = Instance.new("Frame")
    topLine.Size = UDim2.new(0, crosshairConfig.Size, 0, crosshairConfig.Length)
    topLine.Position = UDim2.new(0.5, -crosshairConfig.Size / 2, 0, -crosshairConfig.Size - crosshairConfig.Gap)
    topLine.BackgroundColor3 = Color3.new(1, 1, 1)
    topLine.BorderSizePixel = 0
    topLine.Parent = crosshairContainer

    -- Create the bottom line
    local bottomLine = Instance.new("Frame")
    bottomLine.Size = UDim2.new(0, crosshairConfig.Size, 0, crosshairConfig.Length)
    bottomLine.Position = UDim2.new(0.5, -crosshairConfig.Size / 2, 0, crosshairConfig.Size + crosshairConfig.Gap)
    bottomLine.BackgroundColor3 = Color3.new(1, 1, 1)
    bottomLine.BorderSizePixel = 0
    bottomLine.Parent = crosshairContainer

    -- Create the left line
    local leftLine = Instance.new("Frame")
    leftLine.Size = UDim2.new(0, crosshairConfig.Length, 0, crosshairConfig.Size)
    leftLine.Position = UDim2.new(0, -crosshairConfig.Size - crosshairConfig.Gap, 0.5, -crosshairConfig.Size / 2)
    leftLine.BackgroundColor3 = Color3.new(1, 1, 1)
    leftLine.BorderSizePixel = 0
    leftLine.Parent = crosshairContainer

    -- Create the right line
    local rightLine = Instance.new("Frame")
    rightLine.Size = UDim2.new(0, crosshairConfig.Length, 0, crosshairConfig.Size)
    rightLine.Position = UDim2.new(0, crosshairConfig.Size + crosshairConfig.Gap, 0.5, -crosshairConfig.Size / 2)
    rightLine.BackgroundColor3 = Color3.new(1, 1, 1)
    rightLine.BorderSizePixel = 0
    rightLine.Parent = crosshairContainer

    -- Create the text label
    local textLabel = Instance.new("TextLabel")
    textLabel.Text = "Velocity."
    textLabel.Font = Enum.Font.SourceSans
    textLabel.TextSize = 14
    textLabel.TextColor3 = Color3.new(1, 1, 1) -- White color for "Velocity."
    textLabel.BackgroundTransparency = 1
    textLabel.Size = UDim2.new(0, 100, 0, 14) -- Set the size to fit the text
    textLabel.Parent = screenGui

    -- Create the text label for "cc" in purple
    local ccLabel = Instance.new("TextLabel")
    ccLabel.Text = "cc"
    ccLabel.Font = Enum.Font.SourceSans
    ccLabel.TextSize = 14
    ccLabel.TextColor3 = Color3.fromRGB(170, 0, 255) -- Purple color for "cc"
    ccLabel.BackgroundTransparency = 1
    ccLabel.Size = UDim2.new(0, 14, 0, 14) -- Set the size to fit the text
    ccLabel.Parent = screenGui

    -- Function to update crosshair position
    local function updateCrosshair()
        crosshairContainer.Position = UDim2.new(0, mouse.X, 0, mouse.Y)
        textLabel.Position = UDim2.new(0, mouse.X + 10, 0, mouse.Y + 10) -- Offset the text slightly from the mouse position
        ccLabel.Position = UDim2.new(0, mouse.X + 90, 0, mouse.Y + 10) -- Offset the "cc" text slightly from the mouse position
    end


    -- Update crosshair position on mouse move
    mouse.Move:Connect(updateCrosshair)

    local isSpinning = true
    local runService = game:GetService("RunService")

    -- Function to handle spinning
    local function spinCrosshair()
        local rotation = 0
        runService.RenderStepped:Connect(function(deltaTime)
            if isSpinning then
                rotation = rotation + crosshairConfig.SpinSpeed * deltaTime
                crosshairContainer.Rotation = rotation
            end
        end)
    end

    -- Function to handle rainbow color effect
    local function rainbowColorEffect()
        local hue = 0
        runService.RenderStepped:Connect(function(deltaTime)
            if crosshairConfig.RainbowEnabled then
                hue = (hue + crosshairConfig.RainbowSpeed * deltaTime) % 1
                local color = Color3.fromHSV(hue, 1, 1)
                topLine.BackgroundColor3 = color
                bottomLine.BackgroundColor3 = color
                leftLine.BackgroundColor3 = color
                rightLine.BackgroundColor3 = color
            end
        end)
    end

    rainbowColorEffect()
    spinCrosshair()
end


-- Create the crosshair when the character is added
player.CharacterAdded:Connect(createCrosshair)

-- Create the crosshair initially if the character is already in the game
if player.Character then
    createCrosshair()
end

-- Toggle rainbow effect
local function toggleRainbow()
    getgenv().CrosshairConfig.Crosshair.RainbowEnabled = not getgenv().CrosshairConfig.Crosshair.RainbowEnabled
end

    
    UserInputService.InputBegan:Connect(onKeyPress)
end


